#include <opencv2/objdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

bool decodeQRCode(const std::string& inputImagePath) {
    cv::Mat image = cv::imread(inputImagePath, cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Could not open or find the image for QR code dectection: \n" << inputImagePath << std::endl;
        return false;
    }

    cv::QRCodeDetector qrDecoder;
    cv::Mat bbox, rectifiedImage;

    std::string data = qrDecoder.detectAndDecode(image, bbox, rectifiedImage);

    if (data.length() > 0) {
        std::cout << "\n Decoded Data of QR code \t" << " QR code  holds data = >" << data << std::endl;
        return true;
    }
    else {
        std::cout << " QR Code not detected " << std::endl;
        return false;
    }
}

int main() {
    decodeQRCode("/app/images/input_qr.png");
    return 0;
}
