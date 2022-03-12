// WAP to add two numbers and display the numbers using the concept of class and
// object.

#include <iostream>

class GetSum {
public:
  int a = 5, b = 6; // Default values
};

int main() {
  GetSum X;
  std::cout << "Sum = " << X.a + X.b << std::endl;
  return 0;
}