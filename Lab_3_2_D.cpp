// Write a program to overload “ ++ “ (both prefix and postfix ) operator.

#include <iostream>

class Increment {
  int x;

public:
  Increment(int a) { x = a; }
  void operator++(int) { x++; }
  void operator++() { x++; }
  void display(){ std::cout<< x <<std::endl;}
};

int main() {
  Increment X(2);
  Increment Y(5);
  X++;
  ++Y;
  X.display();
  Y.display();
  return 0;
}