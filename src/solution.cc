#include "solution.hpp"


Student ReadStudentRecFromStream(std::istream& is) {
  char comma = ',';
  char random;
  std::string first_name;
  std::string last_name;
  unsigned int uin;
  double gpa;
  
  if (is.fail()) {
    return Student{};
  }
  
  if (!(is >> first_name)) {
    return Student{};
  }

  if (!(is >> last_name) || (last_name.back() != comma)) {
    return Student{};
  }

  if (!(is >> uin) || (uin.back() != comma)) {
    return Student{};
  }

  if (!(is >> gpa)) {
    return Student{};
  }

  if (!(is >> random)) {
    return Student{};
  }
  
  Student student;
  student.full_name = first_name + ' ' + last_name;
  student.uin = uin;
  student.gpa = gpa;
  return student;
}
