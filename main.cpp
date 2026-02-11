#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>

int WIDTH = 15;

class Student {
  std::string fullName;
  int admNo;
  int form;

public:
  Student(const std::string &n, const int &a, const int &f)
      : fullName(n), admNo(a), form(f) {}

  std::string getName() { return fullName; }

  int getAdmission() { return admNo; }

  int getForm() { return form; }
};

int main(int argc, char *argv[]) {
  std::vector<Student> students = {{"Jane Doe", 1456, 2},
                                   {"Mutua Munywoki", 5467, 3}};

  std::cout << std::left;
  std::cout << std::setw(WIDTH) << "Name" << std::setw(WIDTH) << "AdmNo."
            << std::setw(WIDTH) << "Form" << std::endl;

  for (auto &s : students) {
    std::cout << std::setw(WIDTH) << s.getName() << std::setw(WIDTH)
              << s.getAdmission() << std::setw(WIDTH) << s.getForm()
              << std::endl;
  }
  return 0;
}
