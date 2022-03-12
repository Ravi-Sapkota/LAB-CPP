// #WAP to read name. age and salary of a employee using C++ structure.

#include <iostream>
using std::cin;
using std::cout;
struct Person {
  char name[20];
  int age;
  float salary;
};

int main() {
  Person p1;
  cout << "Enter the name age and salary of Person here:\n";
  cin.get(p1.name, 20);
  cin >> p1.age >> p1.salary;
  cout << "Name : " << p1.name << "\nAge : " << p1.age
       << "\nSalary : " << p1.salary << "\n";
  return 0;
}