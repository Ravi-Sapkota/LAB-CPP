// WAP to calculate weight for the given mass. Make acceleration due to gravity
// g=9.8 m/s2 as default argument.

#include <iostream>

using namespace std;

const double g = 9.8;

class Weight {
  double m;

public:
  void input() {
    cout << "Enter the mass for which you want to find the weight(in kg):"
         << endl;
    cin >> m;
  }
  void displayWeight() {
    cout << "The weight of given mass is " << m * g << " N." << endl;
  }
};

int main() {
  Weight x;
  x.input();
  x.displayWeight();
  return 0;
}