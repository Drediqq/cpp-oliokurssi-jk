#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student {
  std::string name;
  int studentNumber;
  double average;

public:
  Student();
  Student(const Student &);
  Student(Student &&);
  Student &operator=(const Student &) = default;
  Student &operator=(Student &&) = default;
  Student(std::string name, int studentNumber, double average);
  // Setterit
  void setName(const std::string name);
  void setStudentNumber(int studentNumber);
  void setAverage(double average);
  // Getterit
  std::string getName() const;
  int getStudentNumber() const;
  double getAverage() const;
};

#endif // STUDENT_H