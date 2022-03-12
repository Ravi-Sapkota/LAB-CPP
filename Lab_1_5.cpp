// WAP showing the concept of endl and setw manipulators

#include <iomanip> //for setw()
#include <iostream>

using namespace std;

int main() {
  int sum = 123456;
  cout << "setw(0)=" << endl << setw(0) << sum << endl;
  cout << "setw(20)=" << endl << setw(20) << sum << endl;

  //   endl=endLine
  //   setw=setWidth It is used ot make right justified as
  //   45  877
  //   234  21
  //   1     3
  //   cout << setw(5) << 45 << setw(5) << 877 << endl;
  //   cout << setw(5) << 234 << setw(5) << 21 << endl;
  //   cout << setw(5) << 1 << setw(5) << 3 << endl;

  return 0;
}