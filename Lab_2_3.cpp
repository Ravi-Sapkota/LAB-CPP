// WAP input name, address, faculty and roll no of a student and display it. Use
// both member function defining inside the class and outside the class.

#include <iostream>

class DetailsOfStudent {
  char firstName[10], lastName[10], address[10], faculty[8];
  int rollNumber;

public:
  void read() { // function defination inside the class
    std::cout << "Enter the first name of the student : ";
    std::cin >> firstName;
    std::cout << "Enter the last name of the student : ";
    std::cin >> lastName;
    std::cout << "Enter the address of the student : ";
    std::cin >> address;
    std::cout << "Enter the faculty of the student : ";
    std::cin >> faculty;
    std::cout << "Enter the roll number of the student : ";
    std::cin >> rollNumber;
  }
  void display();
};

void DetailsOfStudent::display() { // fucntion defination outside class
  std::cout << "Name : " << firstName << " " << lastName << std::endl
            << "Address : " << address << std::endl
            << "Faculty : " << faculty << std::endl
            << "Roll number : " << rollNumber << std::endl;
}

int main() {
  DetailsOfStudent S;
  S.read();
  S.display();
  return 0;
}