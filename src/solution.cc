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

  if (is.peek() != ' ') {
    return Student{};
  }

  if (!(is >> last_name) || (last_name.back() != comma)) {
    return Student{};
  }

  last_name.pop_back();

  if(!(is >> comma)) {
    return Student{};
  }

  if (!(is >> uin)) {
    return Student{};
  }

  if(!(is >> comma)) {
    return Student{};
  }

  if (!(is >> gpa)) {
    return Student{};
  }
  
  Student student;
  student.full_name = first_name + ' ' + last_name;
  student.uin = uin;
  student.gpa = gpa;
  return student;
}
