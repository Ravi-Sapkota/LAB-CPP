// Write a program showing basic to class type conversion

#include <iostream>

class Time {
public:
  int hr, min;
  Time(int x) {
    hr = x / 60;
    min = x % 60;
  }
  void display() { std::cout << "Time = " << hr << ":" << min << "\n"; }
};

int main() {
  int duration = 150;
  Time t = duration;
  t.display();
  return 0;
}
