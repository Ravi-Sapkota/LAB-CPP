// Write a program to find largest of two numbers by overloading ( > ) operator.

#include <iostream>

class Largest {
  int x;

public:
  Largest() {
    std::cout << "Enter the value of x here : ";
    std::cin >> x;
  }
  void operator>(Largest X) {
    int great=x>X.x?x:X.x;
    std::cout << great << " is largest number." << std::endl;
  }
};

int main() {
  Largest A;
  Largest B;
  B > A;
  return 0;
}