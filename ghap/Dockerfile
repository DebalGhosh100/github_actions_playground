FROM ubuntu:20.04

# Set non-interactive frontend to avoid prompts during build
ENV DEBIAN_FRONTEND=noninteractive

# Update and install g++, cmake, and other necessary tools
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    make \
    && rm -rf /var/lib/apt/lists/*

COPY . ./ghap
RUN ls -al



# Set working directory
WORKDIR /ghap/build

RUN ls -al

# Command to run
RUN cmake . && make



RUN echo "Binary built"
RUN ls -al

CMD ["./basic-calculator", "add", "2", "3"]
