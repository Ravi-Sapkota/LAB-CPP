// WAP to demonstrate the use of inline function.
#include <iostream>

inline int Sum(int &a, int &b) { return a + b; }

int main() {
  int x = 2, y = 3;
  std::cout << "Sum = " << Sum(x, y) << std::endl;
  return 0;
}