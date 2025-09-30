/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include <QtCore/QObject>
#include <QtQml/QQmlListProperty>


class ToolStripActionList : public QObject
{
    Q_OBJECT
    
public:
    explicit ToolStripActionList(QObject* parent = nullptr);
    
    Q_PROPERTY(QQmlListProperty<QObject> model READ model NOTIFY modelChanged)

    QQmlListProperty<QObject> model();

signals:
    void modelChanged(void);

private:
    static void         append  (QQmlListProperty<QObject>* qmlListProperty, QObject* value);
    #if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
        static qsizetype count(QQmlListProperty<QObject>* qmlListProperty);
        static QObject* at(QQmlListProperty<QObject>* qmlListProperty, qsizetype index);
    #else
        static int count(QQmlListProperty<QObject>* qmlListProperty);
        static QObject* at(QQmlListProperty<QObject>* qmlListProperty, int index);
    #endif
    static void         clear   (QQmlListProperty<QObject>* qmlListProperty);

    QList<QObject*> _objectList;
};
