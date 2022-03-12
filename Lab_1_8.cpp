// WAP to find largest of two numbers using the concept of nesting of member
// fucntion

#include <iostream>

using namespace std;

class FindLargest {
  int m, n;

public:
  void input(void);
  void display(void);
  int largest(void);
};

int FindLargest::largest(void) {
  if (m >= n) {
    return m;
  } else {
    return n;
  }
}

void FindLargest::input(void) {
  cout << "Enter any two number:" << endl;
  cin >> m >> n;
}

void FindLargest::display(void) {
  cout << "Largest value= " << largest() << endl;
}

int main() {
  FindLargest A;
  A.input();
  A.display();
  return 0;
}