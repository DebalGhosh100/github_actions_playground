add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCES calc_test.cpp)

add_executable(calc_test ${SOURCES})
target_link_libraries(calc_test gtest gtest_main)
enable_testing()
add_test(NAME calc_test COMMAND calc_test)