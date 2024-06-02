#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void detectEdges(const std::string& inputImagePath, const std::string& outputImagePath) {
   
    Mat image = imread(inputImagePath, IMREAD_COLOR);
    if (image.empty()) {
        cerr << "Could not open or find the image" << endl;
        return;
    }

    
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    Mat edges;
    Canny(grayImage, edges, 100, 200);

    std::cout <<"\n CANNY EDGED IMAGE HAS BEEN SAVED IN  DOCKER WORKING DIRECTORY"<<"\n";
    imwrite(outputImagePath, edges);
}

int main() {
    detectEdges("/app/images/input.jpg", "/app/images/edges.jpg");
    return 0;
}
