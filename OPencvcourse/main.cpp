
#include "include/EdgeDetector.h"
#include "include/ImageProcessor.h"
#include "include/QRCode.h"
#include <iostream>

int main() {


    std::string inputImagePath = "images/Ratan-Tata.jpg";
    std::string  inputQRImage = "images/Qrimage.png";
    std::string edgedOutputImagePath = "images/Ratan-TataEdgedOutput.jpg";
    std::string blurOutputImagePath ="images/Ratan-TataBlurOutput.jpg";

    double lowThreshold = 100.0;
    double highThreshold = 200.0;
    
     //Edge detection
    EdgeDetector edgeDetector(lowThreshold, highThreshold);
    if (!edgeDetector.detectEdges(inputImagePath, edgedOutputImagePath)) {
        std::cerr << "Edge detection failed." << std::endl;
        return 1;
    }
     // blur image
    cv::Mat inputImage = cv::imread(inputImagePath, cv::IMREAD_COLOR);
    if (inputImage.empty()) {
        std::cerr << "Could not open or find the image: " << inputImagePath << std::endl;
        return 1;
    }

    cv::Mat blurredImage = ImageProcessor::blurImage(inputImage);
    if (!cv::imwrite(blurOutputImagePath, blurredImage)) {
        std::cerr << "Could not save the blurred image: " << blurOutputImagePath << std::endl;
        return 1;
    }
    else
    {
        std::cout <<"\n Blurred image  has been saved sucessfully at " << blurOutputImagePath << std::endl;
    }
    if (!QRCode::decodeQRCode(inputQRImage)) {
        std::cerr << " \t QR code decoding failed." << std::endl;
        return 1;
    }
    return 0;
}
