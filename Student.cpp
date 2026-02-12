#include "Student.h"
#include <iomanip>
#include <iostream>

int WIDTH = 15;

Student::Student(int id, std::string fullName, int admNo, int form)
    : id(id), fullName(fullName), admNo(admNo), form(form) {}

int Student::getId() const { return id; }

std::string Student::getName() const { return fullName; }

int Student::getAdmission() const { return admNo; }

int Student::getForm() const { return form; }

void StudentManager::addStudent(const Student &student) {
  students.push_back(student);
}

void StudentManager::listStudents() const {
  if (students.empty()) {
    std::cout << "No students in memory";
    return;
  }

  std::cout << std::left;
  std::cout << std::setw(WIDTH) << "Name" << std::setw(WIDTH) << "AdmNo."
            << std::setw(WIDTH) << "Form" << std::endl;

  for (auto &student : students) {
    std::cout << std::setw(WIDTH) << student.getName() << std::setw(WIDTH)
              << student.getAdmission() << std::setw(WIDTH) << student.getForm()
              << std::endl;
  }
}

void StudentManager::getStudent(int id) {
  for (auto &student : students) {
    if (student.getId() == id) {
      std::cout << std::left;
      std::cout << std::setw(WIDTH) << "Name" << std::setw(WIDTH) << "AdmNo."
                << std::setw(WIDTH) << "Form" << std::endl;

      std::cout << std::setw(WIDTH) << student.getName() << std::setw(WIDTH)
                << student.getAdmission() << std::setw(WIDTH)
                << student.getForm() << std::endl;
    }
  }
}
