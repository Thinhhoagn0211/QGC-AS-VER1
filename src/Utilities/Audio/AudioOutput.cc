/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "AudioOutput.h"
#include "Fact.h"
#include "QGCLoggingCategory.h"
#include "QGCApplication.h"

#include <QtCore/QRegularExpression>

#include <QtTextToSpeech/QTextToSpeech>

QGC_LOGGING_CATEGORY(AudioOutputLog, "qgc.audio.audiooutput");
// qt.speech.tts.flite
// qt.speech.tts.android

const QHash<QString, QString> AudioOutput::_textHash = {
    { "ERR",            "error" },
    { "POSCTL",         "Position Control" },
    { "ALTCTL",         "Altitude Control" },
    { "AUTO_RTL",       "auto return to launch" },
    { "RTL",            "return To launch" },
    { "ACCEL",          "accelerometer" },
    { "RC_MAP_MODE_SW", "RC mode switch" },
    { "REJ",            "rejected" },
    { "WP",             "waypoint" },
    { "CMD",            "command" },
    { "COMPID",         "component eye dee" },
    { "PARAMS",         "parameters" },
    { "ID",             "I.D." },
    { "ADSB",           "A.D.S.B." },
    { "EKF",            "E.K.F." },
    { "PREARM",         "pre arm" },
    { "PITOT",          "pee toe" },
    { "SERVOX_FUNCTION","Servo X Function" },
};

// Q_APPLICATION_STATIC(AudioOutput, _audioOutput);
Q_GLOBAL_STATIC(AudioOutput, _audioOutput);

AudioOutput::AudioOutput(QObject *parent)
    : QObject(parent)
    , _engine(new QTextToSpeech(QStringLiteral("none"), this))
{
    // qCDebug(AudioOutputLog) << this;
}

AudioOutput::~AudioOutput()
{
    // qCDebug(AudioOutputLog) << this;
}

AudioOutput *AudioOutput::instance()
{
    return _audioOutput();
}

void AudioOutput::init(Fact *mutedFact)
{
    Q_CHECK_PTR(mutedFact);

    if (_initialized) {
        return;
    }

    if (QTextToSpeech::availableEngines().isEmpty()) {
        qCWarning(AudioOutputLog) << "No available QTextToSpeech engines found.";
        return;
    }

    // Không có engineChanged trong Qt5 → bỏ hoặc setLocale trực tiếp
    const QLocale defaultLocale = QLocale("en_US");
    if (_engine->availableLocales().contains(defaultLocale)) {
        _engine->setLocale(defaultLocale);
    }

    // Không có aboutToSynthesize trong Qt5 → thay bằng stateChanged
    connect(_engine, &QTextToSpeech::stateChanged, this, [this](QTextToSpeech::State state) {
        if (state == QTextToSpeech::Speaking) {
            _textQueueSize--;
            qCDebug(AudioOutputLog) << "Queue Size:" << _textQueueSize;
        }
    });

    // Giữ nguyên mutedFact vì đây là code QGC
    connect(mutedFact, &Fact::valueChanged, this, [this](QVariant value) {
        setMuted(value.toBool());
    });

    // Debug logging (chỉ những signal Qt5 có)
    if (AudioOutputLog().isDebugEnabled()) {
        connect(_engine, &QTextToSpeech::stateChanged, this, [this](QTextToSpeech::State state) {
            qCDebug(AudioOutputLog) << "TTS State changed to:" << state;
        });
        connect(_engine, &QTextToSpeech::localeChanged, this, [](const QLocale &locale) {
            qCDebug(AudioOutputLog) << "TTS Locale changed to:" << locale;
        });
        connect(_engine, &QTextToSpeech::voiceChanged, this, [](const QVoice &voice) {
            qCDebug(AudioOutputLog) << "TTS Voice changed to:" << voice.name();
        });
    }

    // Set muted state ban đầu
    setMuted(mutedFact->rawValue().toBool());
    _initialized = true;


    qCDebug(AudioOutputLog) << "AudioOutput initialized with muted state:" << _muted;
}

void AudioOutput::setMuted(bool muted)
{
    if (_muted.exchange(muted) != muted) {
        _engine->setVolume(muted ? 0.0 : 1.0);
        qCDebug(AudioOutputLog) << "AudioOutput muted state set to:" << muted;
    }
}

void AudioOutput::say(const QString &text, TextMods textMods)
{
    if (!_initialized) {
        if (!qgcApp()->runningUnitTests()) {
            qCWarning(AudioOutputLog) << "AudioOutput not initialized. Call init() before using say().";
        }
        return;
    }

    if (_muted) {
        return;
    }

    QString outText = _fixTextMessageForAudio(text);

    if (textMods.testFlag(TextMod::Translate)) {
        outText = tr("%1").arg(outText);
    }

    if (_engine->state() == QTextToSpeech::Speaking) {
        // Nếu đang nói, push vào hàng đợi tự quản lý
        if (!_texts.contains(outText)) {
            if (_texts.size() > kMaxTextQueueSize) {
                _texts.removeFirst();
            }
            _texts.append(outText);
        }
    } else {
        _engine->say(outText);
    }
}

QString AudioOutput::_fixTextMessageForAudio(const QString &string)
{
    QString result = string;
    result = _replaceAbbreviations(result);
    result = _replaceNegativeSigns(result);
    result = _replaceDecimalPoints(result);
    result = _replaceMeters(result);
    result = _convertMilliseconds(result);
    return result;
}

QString AudioOutput::_replaceAbbreviations(const QString &input)
{
    QString output = input;

    const QStringList wordList = input.split(' ', Qt::SkipEmptyParts);
    for (const QString &word : wordList) {
        const QString upperWord = word.toUpper();
        if (_textHash.contains(upperWord)) {
            (void) output.replace(word, _textHash.value(upperWord));
        }
    }

    return output;
}

QString AudioOutput::_replaceNegativeSigns(const QString &input)
{
    static const QRegularExpression negNumRegex(QStringLiteral("-\\s*(?=\\d)"));
    Q_ASSERT(negNumRegex.isValid());

    QString output = input;
    (void) output.replace(negNumRegex, "negative ");
    return output;
}

QString AudioOutput::_replaceDecimalPoints(const QString &input)
{
    static const QRegularExpression realNumRegex(QStringLiteral("([0-9]+)(\\.)([0-9]+)"));
    Q_ASSERT(realNumRegex.isValid());

    QString output = input;
    QRegularExpressionMatch realNumRegexMatch = realNumRegex.match(output);
    while (realNumRegexMatch.hasMatch()) {
        if (!realNumRegexMatch.captured(2).isNull()) {
            (void) output.replace(realNumRegexMatch.capturedStart(2), realNumRegexMatch.capturedEnd(2) - realNumRegexMatch.capturedStart(2), QStringLiteral(" point "));
        }
        realNumRegexMatch = realNumRegex.match(output);
    }

    return output;
}

QString AudioOutput::_replaceMeters(const QString &input)
{
    static const QRegularExpression realNumMeterRegex(QStringLiteral("[0-9]*\\.?[0-9]\\s?(m)([^A-Za-z]|$)"));
    Q_ASSERT(realNumMeterRegex.isValid());

    QString output = input;
    QRegularExpressionMatch realNumMeterRegexMatch = realNumMeterRegex.match(output);
    while (realNumMeterRegexMatch.hasMatch()) {
        if (!realNumMeterRegexMatch.captured(1).isNull()) {
            (void) output.replace(realNumMeterRegexMatch.capturedStart(1), realNumMeterRegexMatch.capturedEnd(1) - realNumMeterRegexMatch.capturedStart(1), QStringLiteral(" meters"));
        }
        realNumMeterRegexMatch = realNumMeterRegex.match(output);
    }

    return output;
}

QString AudioOutput::_convertMilliseconds(const QString &input)
{
    QString result = input;

    QString match;
    int number;
    if (_getMillisecondString(input, match, number) && (number >= 1000)) {
        QString newNumber;
        if (number < 60000) {
            const int seconds = number / 1000;
            const int ms = number - (seconds * 1000);
            newNumber = QStringLiteral("%1 second%2").arg(seconds).arg(seconds > 1 ? "s" : "");
            if (ms > 0) {
                (void) newNumber.append(QStringLiteral(" and %1 millisecond").arg(ms));
            }
        } else {
            const int minutes = number / 60000;
            const int seconds = (number - (minutes * 60000)) / 1000;
            newNumber = QStringLiteral("%1 minute%2").arg(minutes).arg(minutes > 1 ? "s" : "");
            if (seconds > 0) {
                (void) newNumber.append(QStringLiteral(" and %1 second%2").arg(seconds).arg(seconds > 1 ? "s" : ""));
            }
        }
        (void) result.replace(match, newNumber);
    }

    return result;
}

bool AudioOutput::_getMillisecondString(const QString &string, QString &match, int &number)
{
    static const QRegularExpression msRegex("((?<number>[0-9]+)ms)");
    Q_ASSERT(msRegex.isValid());

    bool result = false;

    QRegularExpressionMatch regexpMatch = msRegex.match(string);
    if (regexpMatch.hasMatch()) {
        match = regexpMatch.captured(0);
        const QString numberStr = regexpMatch.captured("number");
        number = numberStr.toInt();
        result = true;
    }

    return result;
}
