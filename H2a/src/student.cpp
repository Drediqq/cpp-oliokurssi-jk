/*
Student-luokka

Lisää projektiin luokka nimeltä Student. Tällä luokalla tulisi olla seuraavat
jäsenmuuttujat ja metodit:

Käytä tässä harjoituksessa hyväksesi Qt-Creatorin Refactor toimintoa. Kun olet
luonut jäsen muuttujat, klikkaa hiiren oikealla ja valitse "Add Getter and
Setter ...".

    Jäsenmuuttujat:
        name: merkkijono, joka sisältää opiskelijan nimen.
        studentNumber: kokonaisluku, joka sisältää opiskelijanumeron.
        average: reaaliluku, joka sisältää opiskelijan keskiarvon.
    Metodit:
    Setterit:
        setName(string): asettaa opiskelijan nimen.
        setStudentNumber(int): asettaa opiskelijanumeron.
        setAverage(double): asettaa opiskelijan keskiarvon.
    Getterit:
        string getName(): palauttaa opiskelijan nimen.
        int getStudentNumber(): palauttaa opiskelijanumeron(merkkimuotoinen
tunniste). double getAverage(): palauttaa opiskelijan keskiarvon.

Pääohjelmassa:

    Luo Student-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja
keskiarvo. Tulosta opiskelijan tiedot käyttämällä get-metodeja.
*/

#include "student.h"

Student::Student() {
  name = "none";
  studentNumber = -1;
  average = 0;
}

Student::Student(std::string name, int studentNumber, double average){
  this->name = name;
  this->studentNumber = studentNumber;
  this->average = average;
}
void Student::setName(std::string newName){
    name = newName;
}
void Student::setStudentNumber(int newStudentNumber){
    studentNumber = newStudentNumber;
}
void Student::setAverage(double newAverage) { 
    average = newAverage; 
}

std::string Student::getName() { 
    return name;
}
int Student::getStudentNumber() { 
    return studentNumber; 
}
double Student::getAverage() { 
    return average; 
}