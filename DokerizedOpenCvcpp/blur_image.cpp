#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void blurImage(const std::string& inputImagePath, const std::string& outputImagePath) {

    Mat image = imread(inputImagePath, IMREAD_COLOR);
    if (image.empty()) {
        cerr << "Could not open or find the image" << endl;
        return;
    }
    Mat blurredImage;
    GaussianBlur(image, blurredImage, Size(15, 15), 0);

    std::cout << "\n BLUR IMAGE HAS BEEN SAVED IN DOCKER WORKING DIRECTORY" <<std::endl;
    imwrite(outputImagePath, blurredImage);
}

int main() {
    blurImage("/app/images/input.jpg", "/app/images/blurred.jpg");
    return 0;
}
