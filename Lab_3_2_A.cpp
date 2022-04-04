// Write a program to add two complex numbers by overloading binary operator (+)

#include <iostream>

class Add {
  int img;
  int real;

public:
  Add() {}
  Add(int r, int i) {
    img = i;
    real = r;
  }
  void display() {
    std::cout << "The sum of given two complex numbers is : " << real << " + j"
              << img << std::endl;
  }
  Add operator+(Add Obj) {
    Add temp;
    temp.real = real + Obj.real;
    temp.img = img + Obj.img;
    return temp;
  }
};

int main() {
  Add C1(2, 3);
  Add C2(1, 2);
  Add C3 = C1 + C2;
  C3.display();
}