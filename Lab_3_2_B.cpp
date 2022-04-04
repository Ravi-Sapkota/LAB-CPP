// Write a program to overload (=) operator.
#include <iostream>

using std::cout;
using std::endl;

class Sample {
  int num;

public:
  Sample() {}

  Sample(int n) { num = n; }

  // '+' operator is overloaded by default in c++
  void operator=(Sample y) { cout << "Value = " << y.num << endl; }
};

int main() {
  Sample val;
  Sample f(2);

  val = f;

  return 0;
}