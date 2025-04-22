FROM ubuntu:20.04

# Set non-interactive frontend to avoid prompts during build
ENV DEBIAN_FRONTEND=noninteractive

# Update and install g++, cmake, and other necessary tools
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    make \
    && rm -rf /var/lib/apt/lists/*

COPY . ./


# Set working directory
WORKDIR /ghap/build

RUN ls -al

# Command to run
RUN cmake . && make

# Configuration, run bash interpreter by default
RUN ["/bin/bash"]


RUN echo "Binary built"
RUN ls -al

CMD []
