Sure, here's an example of a GitHub README.md file that explains how to use the edge detection, blur, and QR code detection applications:

---

# OpenCV C++ Applications

This repository contains C++ applications using OpenCV for various image processing tasks, including edge detection, image blurring, and QR code detection.

## Contents

1. [Edge Detection](#edge-detection)
2. [Image Blurring](#image-blurring)
3. [QR Code Detection](#qr-code-detection)

## Edge Detection

### Description
The `edge_detection.cpp` application detects edges in an input image using the Canny edge detection algorithm. It takes an input image, applies the Canny edge detection algorithm, and saves the resulting edge-detected image.

### Usage
To use the edge detection application:
1. Compile the code using a C++ compiler with OpenCV installed.
2. Run the compiled executable with the input image path as an argument.
    ```bash
    ./edge_detection input_image.jpg
    ```

## Image Blurring

### Description
The `blur_image.cpp` application applies Gaussian blur to an input image. It takes an input image, applies Gaussian blur, and saves the resulting blurred image.

### Usage
To use the image blurring application:
1. Compile the code using a C++ compiler with OpenCV installed.
2. Run the compiled executable with the input image path as an argument.
    ```bash
    ./blur_image input_image.jpg
    ```

## QR Code Detection

### Description
The `qrcode_reader.cpp` application detects and decodes QR codes in an input image. It takes an input image, detects any QR codes present, decodes the QR codes, and prints the decoded data to the terminal.

### Usage
To use the QR code detection application:
1. Compile the code using a C++ compiler with OpenCV installed.
2. Run the compiled executable with the input image path as an argument.
    ```bash
    ./qrcode_reader input_qr_image.jpg
    ```

---

Feel free to customize the README.md file further based on your specific requirements or additional information you want to include.
