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
  
  if (!(is >> first_name >> last_name)) {
    return Student{};
  }

  if (!(is >> comma)) {
    return Student{};
  }

  if (!(is >> uin)) {
    return Student{};
  }

  if (!(is >> comma)) {
    return Student{};
  }

  if (!(is >> gpa)) {
    return Student{};
  }

  if (!(is >> random)) {
    return Student{};
  }
  
  Student student;
  student.name = first_name + ' ' + last_name;
  student.uin = uin;
  student.gpa = gpa;
  return Student{};
}
