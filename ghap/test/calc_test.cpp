#include "../main/calculator/calculator.hpp"
#include <iostream>
#define NEWL "\n";
#define LOG(data) std::cout << data << NEWL;
#define FAILED std::cout << "TEST CASE FAILED" << NEWL;

int main() {

  // Summation
  float sum = Calculator::evaluate("add", 2, 3);
  if (sum != 5) {
    FAILED
    LOG("Summation failed")

    return 1;
  }
  LOG("Summation succeeded")

  // Subtraction
  float difference = Calculator::evaluate("subtract", 5, 2);
  if (difference != 3) {
    FAILED
    LOG("Subtraction failed")

    return 1;
  }
  LOG("Subtraction succeeded")

  // Multiplication
  float product = Calculator::evaluate("multiply", 5, 2);
  if (product != 10) {
    FAILED
    LOG("Multiplation failed")

    return 1;
  }
  LOG("Multiplication succeeded")

  // Division
  float result = Calculator::evaluate("divide", 5, 2);

  if (result != 2.5) {
    FAILED
    LOG("Division failed")

    return 1;
  }
  LOG("Division succeeded")

  LOG("ALL TEST CASES PASSED ")

  return 0;
}
