#include <iostream>
#include "core/test.hpp"

int main(int argc, const char **argv) {
  std::cout << "vscode-cpp-mingw-starter\n\n";

  std::cout << "Command Line Arguments:\n";
  for (int i {0}; i < argc; ++i) {
    std::cout << argv[i] << '\n';
  }

  testFunc();

  std::cin.get();
  return 0;
}
