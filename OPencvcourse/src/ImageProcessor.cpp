
#include "../include/ImageProcessor.h"

cv::Mat ImageProcessor::blurImage(const cv::Mat& inputImage) {
    cv::Mat blurredImage;
    cv::GaussianBlur(inputImage, blurredImage, cv::Size(15, 15), 0);
    return blurredImage;
}
