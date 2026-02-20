#include "Student.h"
#include <iostream>
#include <vector>

std::vector<Student> dummyRecord = {{1, "James Mumo", 4187, 4},
                                    {2, "Alice Ndonye", 5423, 1},
                                    {3, "Robert Mukuchu", 4234, 3},
                                    {4, "Sophia Ndunge", 44456, 2},
                                    {5, "Michael Munyao", 5565, 1}};

int main(int argc, char *argv[]) {

  int choice, studId, admNo;
  StudentManager stdMng;

  do {
    std::cout << "1. Load dummy student data\n2. List students\n3. Get student "
                 "data by ID\n4. Get student data by Admission Number\n0.Exit"
              << std::endl;
    std::cout << "\nChoice: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
      for (const auto &student : dummyRecord) {
        stdMng.addStudent(student);
      }
      std::cout << "Succesfully added students record" << std::endl;
      std::cout << "\n";
      break;

    case 2:
      stdMng.listStudents();
      std::cout << "\n";
      break;

    case 3:
      std::cout << "Student id: ";
      std::cin >> studId;
      stdMng.getStudentById(studId);
      std::cout << "\n";
      break;

    case 4:
      std::cout << "Student Admission Number: ";
      std::cin >> admNo;
      stdMng.getStudentByAdm(admNo);
      std::cout << "\n";
      break;
    default:
      std::cout << "Bye" << std::endl;
    }
  } while (choice != 0);

  return 0;
}
