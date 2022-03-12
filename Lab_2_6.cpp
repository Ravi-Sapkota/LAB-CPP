// WAP to read two integer numbers and display it. Use constructor to read the
// data

#include <iostream>

class ReadInteger {
  int a, b;

public:
  ReadInteger() {
    std::cout << "Enter any two numbers here:" << std::endl;
    std::cin >> a >> b;
  }
  void displayNumbers() {
    std::cout << "The two integers are:" << std::endl
              << a << " and " << b << std::endl;
  }
};

int main() {
  ReadInteger _1;
  _1.displayNumbers();
  return 0;
}