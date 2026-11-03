#include "car.h"

// asettaa merkin
Car::Car() {
  brand = "unknown";
  model = "unknown";
  yearModel = 0;
}
Car::Car(std::string brand, std::string model, int yearModel) {
  this->brand = brand;
  this->model = model;
  this->yearModel = yearModel;
}

void Car::setBrand(std::string newBrand) { brand = newBrand; }
// asettaa mallin
void Car::setModel(std::string newModel) { 
    model = newModel; 
}
// asettaa vuosimallin
void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel; 
}
// tulostaa auton tiedot
void Car::printData() {
  std::cout << "Merkki: " << brand << ", Malli: " << model
       << ", Vuosi: " << yearModel << std::endl;
}

