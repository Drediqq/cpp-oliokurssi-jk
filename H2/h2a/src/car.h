#ifndef CAR_H
#define CAR_H
/*
Car-luokka

Lisää projektiin luokka nimeltä Car. Tällä luokalla tulisi olla seuraavat
jäsenmuuttujat ja metodit:

    Jäsenmuuttujat:
        brand: merkkijono, joka sisältää auton merkin.
        model: merkkijono, joka sisältää auton mallin.
        yearModel: kokonaisluku, joka sisältää auton valmistusvuoden.
    Metodit:
        printData(): tulostaa auton merkin, mallin ja valmistusvuoden.
        setBrand(string): asettaa auton merkin.
        setModel(string): asettaa auton mallin.
        setYearModel(int): asettaa auton valmistusvuoden.

Pääohjelmassa:

    Luo Car-olio pinomuistiin ja aseta sille merkki, malli ja vuosi.
  Tulosta auton tiedot käyttämällä printData()-metodia.
*/

#include <iostream>

using namespace std;

class Car {
private:
  string brand;
  string model;
  string yearModel;

public:
  Car(string brand, string model, string yearModel)
      : brand(std::move(brand)), model(std::move(model)),
        yearModel(std::move(yearModel)) {}
  void printData();
  void setBrand(string);
  void setModel(string);
  void setYearModel(int);
};

#endif // CAR_H
