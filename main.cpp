#include "Student.h"

int main(int argc, char *argv[]) {

  StudentManager stdMng;
  stdMng.addStudent(Student(1, "James", 4, 2));
  stdMng.listStudents();

  return 0;
}
