#include <iostream>
#include <memory>
#include "src/car.h"
#include "src/rectangle.h"
#include "src/student.h"


using namespace std;

int main() {
  // Car pinoon
  Car newCar1;
  Car newCar("Lada", "Samara", 1995);
  // newCar.setBrand("Audi");
  newCar1.printData();
  newCar.printData();

  // Rectangle kekoon
  Rectangle *newRectangle = new Rectangle();

  newRectangle->setWidth(5.5);
  newRectangle->setHeight(6.6);

  cout << "Pinta-ala: " << newRectangle->getArea() << endl;
  cout << "Ympärys: " << newRectangle->getCircum() << endl;

  // poistetaan
  delete newRectangle;
  // nollataan vielä pointteri
  newRectangle = nullptr;

  // Student smart pointer
  unique_ptr<Student> student = make_unique<Student>("Jorma", 1, 5.623);

  cout << "nimi: " << student->getName()
       << " opiskelija nro: " << student->getStudentNumber()
       << " keskiarvo: " << student->getAverage() << endl;

  return 0;

}
