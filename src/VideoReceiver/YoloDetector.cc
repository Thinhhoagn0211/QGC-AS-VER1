#include "YoloDetector.h"

YoloDetector::YoloDetector(const std::string& modelPath) {
    _net = cv::dnn::readNetFromONNX(modelPath);
    _net.setPreferableBackend(cv::dnn::DNN_BACKEND_OPENCV);
    _net.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
}

std::vector<Detection> YoloDetector::detect(const cv::Mat& frame) {
    std::vector<Detection> detections;

    if (frame.empty()) {
        std::cerr << "[YOLO] Warning: empty frame, skip detection." << std::endl;
        return detections;
    }
    
    cv::Mat blob;
    cv::dnn::blobFromImage(frame, blob, 1/255.0, cv::Size(_inputWidth, _inputHeight),
                           cv::Scalar(), true, false);
    _net.setInput(blob);

    cv::Mat outputs = _net.forward();

    // TODO: parse YOLO outputs properly (depends on your YOLO version: v5/v7/v8)
    // For now, return empty results
    return detections;
}
