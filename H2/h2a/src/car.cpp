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
#include "car.h"

void Car::printData() {
  cout << "Merkki: " << model << ", Malli: " << model
       << ", Vuosi: " << yearModel << endl;
}
void Car::setBrand(string newBrand) { brand = newBrand; };
void Car::setModel(string newModel) { model = newModel; };
void Car::setYearModel(int newYearModel) { yearModel = newYearModel; };
// Car::Car(string brand, string model, string yearModel)
//     : brand(std::move(brand)), model(std::move(model)),
//       yearModel(std::move(yearModel)) {}
