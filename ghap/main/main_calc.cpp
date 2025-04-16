#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "./operations.hpp"

int main(int argc, char *argv[]) {
  // Check if exactly 4 arguments are provided (program name + 3 args)
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <add|subtract> <num1> <num2>"
              << std::endl;
    return 1;
  }

  std::string operation = argv[1];
  int num1 = std::atoi(argv[2]);
  int num2 = std::atoi(argv[3]);

  Operations calc_operator = Operations();

  int result = 0;

  if (operation == "add")
    result = calc_operator.add(num1, num2);
  else if (operation == "subtact")
    result = calc_operator.add(num1, num2);

  std::cout << result << std::endl;

  return (0);
}
