// WAP to calculate weight for the given mass. Make acceleration due to gravity
// g=9.8 m/s2 as default argument.

#include <iostream>

using namespace std;

class Weight {
  double m, g;

public:
  Weight(double m, double g = 9.8) {
    cout << "The weight of given mass is " << m * g << " N." << endl;
  }
};

int main() {
  Weight x(52);
  return 0;
}
