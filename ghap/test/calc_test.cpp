#include <gtest/gtest.h>

TEST(CalcTest, Addition) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(CalcTest, Subtraction) {
    EXPECT_EQ(5 - 3, 2);
}

TEST(CalcTest, Multiplication) {
    EXPECT_EQ(3 * 4, 12);
}

TEST(CalcTest, Division) {
    EXPECT_EQ(10 / 2, 5);
}