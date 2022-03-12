// WAP showing the concept of reference variable

#include <iostream>

using namespace std;

int main() {
  int m = 5;
  int &n = m;
  // n is reference variable of m i.e, both n and m are the variables of same
  // memory location. if any of the variable is changed, the effect will reflect
  // in another as well

  cout << "m=" << m << " n=" << n << endl;
  n++;
  // n is reference of m so m and n have now same value
  cout << "m=" << m << " n=" << n << endl;
}