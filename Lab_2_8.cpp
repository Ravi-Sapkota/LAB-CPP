// WAP to add two complex numbers using the concept of constructor overloading

#include <iostream>

class AddComplex {
  int real, img;

public:
  AddComplex() {
    std::cout << "Enter the real value of complex number : ";
    std::cin >> real;
    std::cout << "Enter the imaginary value of complex number : ";
    std::cin >> img;
  }
  AddComplex(AddComplex C1, AddComplex C2) {
    real = C1.real + C2.real;
    img = C1.img + C2.img;
    displaySum();
  }
  void displaySum() {
    if (img >= 0) {
      std::cout << "The sum of given complex numbers is \t" << real << "+i"
                << img << std::endl;
    } else {
      std::cout << "The sum of given complex numbers is \t" << real << "-i"
                << -1 * img << std::endl;
    }
  }
};

int main() {
  AddComplex A;
  AddComplex B;
  AddComplex Sum(A, B);
  return 0;
}