cmake_minimum_required(VERSION 3.16)

project(basic-calculator)

set(SOURCE_FILES ../main/main_calc.cpp)

set(HEADER_FILES ../main/operations.hpp)

set(HEADER_DIRECTORIES ../main)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HEADER_DIRECTORIES})
