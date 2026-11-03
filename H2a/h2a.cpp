#include "src/car.h"
#include "src/rectangle.h"
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

  return 0;
}
