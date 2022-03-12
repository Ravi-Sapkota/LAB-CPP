// WAP to overload a function that receives float, character and int type of
// data.

#include <iostream>

class function {
public:
  void overload(float x) {
    std::cout << "This overload function receives float, x=" << x << std::endl;
  }
  void overload(char x) {
    std::cout << "This overload function receives character, x=" << x
              << std::endl;
  }
  void overload(int x) {
    std::cout << "This overload function receives integer, x=" << x
              << std::endl;
  }
};

int main() {
  function func;
  func.overload(5.5f);
  func.overload('a');
  func.overload(4);
  return 0;
}