#pragma once
#ifndef IMAGEPROCESSOR_HPP
#define IMAGEPROCESSOR_HPP

#include <opencv2/opencv.hpp>

#include <iostream>
#include <string>

class ImageProcessor {
public:
    static cv::Mat blurImage(const cv::Mat& inputImage);
};

#endif 
