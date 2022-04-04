// Write a program to overload unary minus operator.

#include <iostream>

using namespace std;

class Negative {
  int meter;
  int centimeter;

public:
  Negative(int m, int i) {
    meter = m;
    centimeter = i;
  }

  void display() { cout << meter << " m and " << centimeter << "cm " << endl; }

  void operator-() {
    meter = -meter;
    centimeter = -centimeter;
  }
};

int main() {
  Negative D1(3, 4);
  -D1;
  D1.display();
  return 0;
}