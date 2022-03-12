// Create a new class named city that will have two member variables Cityname
// (char[20]), and DistFromKTM(flaot). Add member functions to set and retrieve
// the Cityname and DistFromKTM separately. Add new member functions AddDistance
// that takes two arguments of class City and returns the sum of DistFromKTM of
// two arguments. In main function, initialize three city objects. Set the frist
// and second city to be Pokhara and Dhangadi. Display the sum of DistFromKTM of
// Pokhara and Dhangadi calling AddDistance function of third city object. (Use
// objects as function Arguments)

#include <iostream>
using namespace std;

class City {
  char cityName[20];
  float distanceFromKTM;

public:
  void read() {
    cout << "Enter city name: ";
    cin >> cityName;
    cout << "Enter distance from Kathmandu: ";
    cin >> distanceFromKTM;
  }
  void addDistance(City x, City y) {
    float distanceSum = x.distanceFromKTM + y.distanceFromKTM;
    cout << "Sum= " << distanceSum << endl;
  }
  void display() {
    cout << "Name= " << cityName << endl;
    cout << "Distance from Kathmandu= " << distanceFromKTM << endl;
  }
};

int main() {
  City c1, c2, c3;
  c1.read();
  c2.read();
  c1.display();
  c2.display();
  c3.addDistance(c1, c2);
  return 0;
}