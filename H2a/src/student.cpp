#include "student.h"

// Oletuskonstruktori
Student::Student() : name("none"), studentNumber(-1), average(0.0) {}

// Parempi konstruktori
Student::Student(std::string name, int studentNumber, double average)
    : name(std::move(name)), studentNumber(studentNumber), average(average) {
}

// Setterit
void Student::setName(std::string newName) { name = std::move(newName); }

void Student::setStudentNumber(int newStudentNumber) {
  studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage) { average = newAverage; }

// Getterit
std::string Student::getName() const { return name; }

int Student::getStudentNumber() const { return studentNumber; }

double Student::getAverage() const { return average; }
