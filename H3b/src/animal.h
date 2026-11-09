#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
  Animal();               // constructor
  virtual ~Animal();      // destructor
  virtual void callOut(); // soidinkutsu
};

#endif