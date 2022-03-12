// WAP that reads two numbers. Calculate the smallest one and then print the
// smallest one defining function outside the class.

#include <iostream>

class Smallest {
  int a, b;

public:
  void getNumbers();
  void display();
};

void Smallest::getNumbers() {
  std::cout << "Enter any two numbers" << std::endl;
  std::cin >> a >> b;
}
void Smallest::display() {
  int small = a > b ? b : a;
  std::cout << "The smallest number is " << small << std::endl;
}

int main() {
  Smallest S;
  S.getNumbers();
  S.display();
  return 0;
}