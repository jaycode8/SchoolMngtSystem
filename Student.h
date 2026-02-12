#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
  int id;
  std::string fullName;
  int admNo;
  int form;

public:
  Student(const int id, const std::string fullName, const int admNo,
          const int form);

  int getId() const;
  std::string getName() const;
  int getAdmission() const;
  int getForm() const;
};

class StudentManager {
  std::vector<Student> students;

public:
  void addStudent(const Student &student);
  void listStudents() const;
  void getStudent(int id);
};

#endif // STUDENT_H
