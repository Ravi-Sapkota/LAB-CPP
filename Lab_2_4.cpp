// Create a class called student with three data members (student name[20],
// roll_no, Address) function called input_data() to take details of the
// students from the user, and a function called display_data() to display the
// details of the students.) In main, creat two objencts of the class student
// and for each call both of the functions.

#include <iostream>

class Student {
  char student_name[20], Address[20];
  int roll_no;

public:
  void input_data() { // function defination inside the class
    std::cout << "Enter the name of the student : ";
    std::cin >> student_name;
    std::cout << "Enter the address of the student : ";
    std::cin >> Address;
    std::cout << "Enter the roll number of the student : ";
    std::cin >> roll_no;
  }
  void display_data();
};

void Student::display_data() { // fucntion defination outside class
  std::cout << "Name : " << student_name << std::endl
            << "Address : " << Address << std::endl
            << "Roll number : " << roll_no << std::endl;
}

int main() {
  Student S1, S2;
  S1.input_data();
  S1.display_data();
  S2.input_data();
  S2.display_data();
  return 0;
}