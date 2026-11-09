#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <string>

// Car
class Car {
private:
  Engine objEngine;
  Wheel objWheel1;
  Wheel objWheel2;
  Wheel objWheel3;
  Wheel objWheel4;

  std::string brand; // merkki
  std::string model; // malli

public:
  // oletuskonstruktori
  Car();

  // parempi konstruktori
  Car(std::string brand, std::string model);

  // metodit
  void setEngine();
  void setWheels();
  void setBrand(std::string); // asettaa merkin
  void setModel(std::string); // asettaa mallin

  std::string getBrand();
  std::string getModel();
  void printDetails(); // tulostaa auton tiedot
};

#endif // CAR_H