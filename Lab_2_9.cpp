// WAP to show the concept of destructor

#include <iostream>

using namespace std;

class Wow {
public:
  Wow() { cout << "This is constructor" << endl; }
  ~Wow() { cout << "This is destructor" << endl; }
};

int main() {
  Wow run1;
  Wow run2;
  return 0;
}