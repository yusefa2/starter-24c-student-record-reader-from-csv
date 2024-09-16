#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  char comma = ',';
  
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
  return Student{};
}
