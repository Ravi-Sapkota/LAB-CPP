// WAP to add two integer numbers and from two different objects and place it in
// third object and display the result. Use the concept of "returning object
// form function"

#include <iostream>

class Name {
public:
  int x;
  void read(int a) { x = a; }
  Name Add(Name A) {
    Name temp;
    temp.x = x + A.x;
    return temp;
  }
};

int main() {
  Name obj1, obj2, obj3;
  obj1.read(5);
  obj2.read(1);
  obj3 = obj1.Add(obj2);
  std::cout << obj1.x << " + " << obj2.x << " = " << obj3.x << std::endl;
  return 0;
}