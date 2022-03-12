// WAP to make one object to read one integer data. Make another object and copy
// the data of first object to it. (Use the concept of copy constructor)

#include <iostream>

class Read {
  int x;

public:
  Read() {
    std::cout << "Enter a number here : ";
    std::cin >> x;
  }
  Read(Read &obj) { x = obj.x; } // copy constructor
  void display() { std::cout << "The integer value is " << x << std::endl; }
};

int main() {
  Read X;
  Read Y(X); // Y=X||Y(X)
  Y.display();
  return 0;
}