# Use an official OpenCV image
FROM opencvcourses/opencv:440

# Set the working directory
WORKDIR /app

# Update the repository list and install build-essential
RUN apt-get update --allow-releaseinfo-change && \
    apt-get install -y --no-install-recommends build-essential

# Set the library path environment variable
ENV LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH

# Copy the source code to the container
COPY edge_detection.cpp /app/edge_detection.cpp
COPY blur_image.cpp /app/blur_image.cpp
COPY qrcode_reader.cpp /app/qrcode_reader.cpp

# Compile the edge detection application
RUN g++ edge_detection.cpp -o edge_detection `pkg-config --cflags --libs opencv4`

# Compile the blur image application
RUN g++ blur_image.cpp -o blur_image `pkg-config --cflags --libs opencv4`

# Compile the QR code reader application
RUN g++ qrcode_reader.cpp -o qrcode_reader `pkg-config --cflags --libs opencv4`

# Create an images directory and copy input images to the container
RUN mkdir -p /app/images
COPY images/input.jpg /app/images/input.jpg
COPY images/input_qr.png /app/images/input_qr.png

# Run all the applications sequentially
CMD ./edge_detection && ./blur_image && ./qrcode_reader
