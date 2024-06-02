#ifndef EDGEDETECTOR_HPP
#define EDGEDETECTOR_HPP

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

class EdgeDetector {
public:
    EdgeDetector(double lowThreshold, double highThreshold);
    bool detectEdges(const std::string& inputImagePath, const std::string& outputImagePath);

private:
    double lowThreshold;
    double highThreshold;
};

#endif
