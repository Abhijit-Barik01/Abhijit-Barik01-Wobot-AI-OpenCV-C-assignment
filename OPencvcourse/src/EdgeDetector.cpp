#include "../include/EdgeDetector.h"
#include <iostream>

EdgeDetector::EdgeDetector(double lowThreshold, double highThreshold)
    : lowThreshold(lowThreshold), highThreshold(highThreshold) {}

bool EdgeDetector::detectEdges(const std::string& inputImagePath, const std::string& outputImagePath) {
    cv::Mat image = cv::imread(inputImagePath, cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Could not open or find the input image path : " << inputImagePath <<"  \n"<<std::endl;
        return false;
    }

    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    cv::Mat edges;
    cv::Canny(grayImage, edges, lowThreshold, highThreshold);

    if (!cv::imwrite(outputImagePath, edges)) {
        std::cerr << "Could not save the EDGED output image: " << outputImagePath << std::endl;
        return false;
    }
    else
    {
        std::cout << " Edges of input image is identified. The Edged image has been saved locally at " << outputImagePath <<" path  " <<"\n\n";
    }

    return true;
}
