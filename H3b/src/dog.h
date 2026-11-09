#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
public:
  Dog();                   // constructor
  ~Dog() override;         // destructor
  void callOut() override; // soidinkutsu
};

#endif