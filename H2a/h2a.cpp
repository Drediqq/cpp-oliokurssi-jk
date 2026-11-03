#include "src/car.h"
#include "src/rectangle.h"
#include "src/student.h"
#include <iostream>
using namespace std;

int main() {
  //Car pinoon
  Car newCar1;
  Car newCar("Lada", "Samara", 1995);
  //newCar.setBrand("Audi");
  newCar1.printData();
  newCar.printData();
  
  //Rectangle kekoon
  Rectangle* newRectangle = new Rectangle();

  newRectangle->setWidth(5.5);
  newRectangle->setHeight(6.6);

  cout << "Pinta-ala: " << newRectangle->getArea() << endl;
  cout << "Ympärys: " << newRectangle->getCircum() << endl;

  //poistetaan
  delete newRectangle;
  //nollataan vielä pointteri
  newRectangle = nullptr;

  Student newStudent("Jorma", 1, 5.623);

  std::string nimi = newStudent.getName();
  int stuNu = newStudent.getStudentNumber();
  double avg = newStudent.getAverage();

  cout << "nimi: " << nimi << " opiskelija nro: " << stuNu << " keskiarvo: " << avg << endl;

  Student newStudent1;
  

  std::string nimi2 = newStudent1.getName();
  int stuNu2 = newStudent1.getStudentNumber();
  double avg2 = newStudent1.getAverage();
  
  cout << "nimi: " << nimi2 << " opiskelija nro: " << stuNu2 << " keskiarvo: " << avg2 << endl;

  return 0;
}
