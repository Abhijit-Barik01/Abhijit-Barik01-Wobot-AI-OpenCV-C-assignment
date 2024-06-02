#pragma once
#ifndef QRCODE_HPP
#define QRCODE_HPP

#include <opencv2/opencv.hpp>
#include <string>

class QRCode {
public:
    static bool decodeQRCode(const std::string& inputImagePath);
};

#endif 
