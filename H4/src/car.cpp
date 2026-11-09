#include "car.h"
#include <iostream>
#include <vector>

// oletuskonstruktori
Car::Car() {
  brand = "unknown";
  model = "unknown";
}

// konstruktori
Car::Car(std::string brand, std::string model) {
  this->brand = brand;
  this->model = model;
}

// asettaa moottorin
void Car::setEngine() {
  objEngine.setHorsepower(150);
  objEngine.setDisplacement(2.0);
}

// asettaa renkaat (tyhmästi)
void Car::setWheels() {
  objWheel1.setSize(17);
  objWheel1.setType("kesarengas");

  objWheel2.setSize(17);
  objWheel2.setType("kesarengas");

  objWheel3.setSize(17);
  objWheel3.setType("kesarengas");

  objWheel4.setSize(17);
  objWheel4.setType("kesarengas");
}

//asettaa merkin
void Car::setBrand(std::string newBrand) { brand = newBrand; }

// asettaa mallin
void Car::setModel(std::string newModel) { model = newModel; }

// tulostaa auton tiedot
void Car::printDetails() {
  std::cout << "Auto: " << brand << " " << model << std::endl;

  std::cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
            << objEngine.getDisplacement() << " L" << std::endl;

  std::cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, "
            << objWheel1.getType() << std::endl;
  std::cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, "
            << objWheel2.getType() << std::endl;
  std::cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, "
            << objWheel3.getType() << std::endl;
  std::cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, "
            << objWheel4.getType() << std::endl;
}
