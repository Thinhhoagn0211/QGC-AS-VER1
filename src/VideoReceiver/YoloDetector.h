#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include <string>

/// Struct to hold detection results
struct Detection {
    cv::Rect box;        ///< Bounding box around detected object
    float confidence;    ///< Confidence score (0.0 - 1.0)
    int class_id;        ///< Class index
};

/// YOLO Detector wrapper
class YoloDetector {
public:
    /// Constructor: takes a path to the model (ONNX or similar)
    YoloDetector(const std::string& modelPath);

    /// Run detection on a frame
    std::vector<Detection> detect(const cv::Mat& frame);

private:
    cv::dnn::Net _net;   ///< OpenCV DNN network
    int _inputWidth = 640;   ///< Model input width
    int _inputHeight = 640;  ///< Model input height
    float _scoreThreshold = 0.5f;  ///< Minimum confidence to keep a detection
    float _nmsThreshold = 0.45f;   ///< NMS threshold for overlapping boxes
};
