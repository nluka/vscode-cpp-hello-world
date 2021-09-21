#include <iostream>

int main(int argc, char **argv) {
  std::cout << "Hello world!" << std::endl << std::endl;

  std::cout << "Arguments:" << std::endl;
  for (int i = 0; i < argc; i++) {
    std::cout << i + 1 << ". " << argv[i] << std::endl;
  }

  return 0;
}