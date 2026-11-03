#ifndef CAR_H
#define CAR_H

#include <iostream>

// Car
class Car {

public:
  std::string brand;  // merkki
  std::string model;  // malli
  int yearModel;      // vuosimalli

  // oletuskonstruktori
  Car();

  // parempi konstruktori
  Car(std::string brand, std::string model, int yearModel);

  // metodit
  void setBrand(std::string);   // asettaa merkin
  void setModel(std::string);   // asettaa mallin
  void setYearModel(int);       // asettaa vuosimallin
  void printData();             // tulostaa auton tiedot

};

#endif // CAR_H