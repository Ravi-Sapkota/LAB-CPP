// WAP to swap two integer number using call pass by reference

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

int main() {
  int m = 10;
  int n = 20;
  cout << "Before swap:\tm=" << m << ", n=" << n << endl;
  swap(m, n);
  cout << "After swap:\tm=" << m << ", n=" << n << endl;
  return 0;
}