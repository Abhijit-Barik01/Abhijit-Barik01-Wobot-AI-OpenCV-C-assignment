* Production level Project structure in  my local system  .        ---> To see docker way implementation follow this link  [Docker](#Dockerized-Appilication)
  
                                           
                                           
OPencvcourse/                     <<< ----------------------------------------|     
|   └── main.cpp

├── include folder/

│   └── EdgeDetector.hpp

│   └── ImageProcessor.hpp

│   └── QRCode.hpp

├── src folder/

│   └── EdgeDetector.cpp

│   └── ImageProcessor.cpp

│   └── QRCode.cpp


└── imagesfolder/
   
    └── input.jpg
    
    └── Qr.png

  --
    ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/bc9de0ba-d8ec-49e7-8f1d-162d773f0da3)


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
1. Compile & run the code using a C++ compiler with OpenCV installed.
2. Input:

   ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/5f087633-4ea0-4eae-8bae-2f07cae9d3bd)

4. Output :

   ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/9d8ff109-cd92-46f6-b49f-79b7d76aae21)

  ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/39a4a6ce-e518-4637-a080-67a306b790b4)


## Image Blurring

### Description
The `blur_image.cpp` application applies Gaussian blur to an input image. It takes an input image, applies Gaussian blur, and saves the resulting blurred image.

### Usage
To use the image blurring application:
1. Compile and run the code using a C++ compiler with OpenCV installed.
2. Input:
3. 
   ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/52b8d4c3-3121-483c-81d4-661966fe1b0e)

4. Output :
   ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/9e436255-d06a-45cb-baa0-946f3af99709)
   

   ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/e0e77710-f3c9-4e10-97be-b71c84fc2f73)


## QR Code Detection

### Description
The `qrcode_reader.cpp` application detects and decodes QR codes in an input image. It takes an input image, detects any QR codes present, decodes the QR codes, and prints the decoded data to the terminal.

### Usage
To use the QR code detection application:
1. Compile and run the code using a C++ compiler with OpenCV installed.
2. Output.
   
 ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/faf16852-dc4b-403f-8d69-6630008ad30e)

 ![image](https://github.com/Abhijit-Barik01/Abhijit-Barik01-Wobot-AI-OpenCV-C-assignment/assets/71961635/d493baff-9c66-4943-a85f-b115d93ad6f9)



## Dockerized Appilication
* Pull this docker image from docker hub:

docker pull avijit1963/wobotai12.cppopencv:latest

* Run docker container:

docker run -v $(pwd)/images:/app/images -it avijit1963/wobotai12.cppopencv:latest
* Verify Docker Volume Mounting:
When you run the Docker container with -v $(pwd)/images:/app/images, it mounts the local images directory to the container's /app/images directory. Make sure the images are accessible within the container



---


