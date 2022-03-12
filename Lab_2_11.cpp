// WAP showing the concept of Static data member

#include <iostream>

class static_demo {
public:
  static int x;
  int y = 0;
  static_demo() {
    x++;
    y++;
    std::cout << "New constructor created.\n";
  }
  void display() { std::cout << "x = " << x << "\ny = " << y << std::endl; }
};
int static_demo::x = 0;
int main() {
  static_demo a, b, c;
  a.display();
  static_demo d;
  d.display();
  return 0;
}