#include "car.h"

// tulostaa auton tiedot
void Car::printData() {
  std::cout << "Merkki: " << brand << ", Malli: " << model
       << ", Vuosi: " << yearModel << std::endl;
}
// asettaa merkin
void Car::setBrand(std::string newBrand) {
    brand = newBrand; 
}
// asettaa mallin
void Car::setModel(std::string newModel) { 
    model = newModel; 
}
// asettaa vuosimallin
void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel; 
}

