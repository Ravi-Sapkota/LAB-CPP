// WAP declaring a class and object to input assessment marks and practical
// marks defining funcion setmark and publishmark. Define the function inside
// the class.

#include <iostream>

class Marks {
  float assessment_marks, practical_marks;

public:
  void setMark() {
    std::cout << "Enter the assessment marks of student : ";
    std::cin >> assessment_marks;
    std::cout << "Enter the practical marks of student : ";
    std::cin >> practical_marks;
    publishMark();
  }
  void publishMark() {
    std::cout << "Assessment Marks : " << assessment_marks << std::endl;
    std::cout << "Practical Marks : " << practical_marks << std::endl;
    std::cout << "Total internal marks = " << assessment_marks + practical_marks
              << "/40" << std::endl;
  }
};

int main() {
  Marks student;
  student.setMark();
  return 0;
}