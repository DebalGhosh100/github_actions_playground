cmake_minimum_required(VERSION 3.10)
project(project-name)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(main)
add_subdirectory(test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(calc_test test/calc_test.cpp)
target_link_libraries(calc_test ${GTEST_LIBRARIES} pthread)

add_test(NAME CalcTest COMMAND calc_test)