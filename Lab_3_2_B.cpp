// Write a program to overload (=) operator.
#include <iostream>
class Sample {
  int num;

public:
  Sample() {}
  Sample(int n) { num = n; }
  void operator=(Sample y) { num=y.num; }
  void display(){std::cout<<"Value = " << num << "\n";}
};

int main() {
  Sample val;
  Sample f(2);
//   Before overloading
  val.display();
  val = f;
//   After overloading
  val.display();
  return 0;
}
