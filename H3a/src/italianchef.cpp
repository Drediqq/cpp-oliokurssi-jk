#include <iostream>
#include "chef.h"
#include "italianchef.h"


// constructor
ItalianChef::ItalianChef(const std::string &name) : Chef(name) {
  
  std::cout << "ItalianChef " << this->name << " constructed" << std::endl;

}

// destructor
ItalianChef::~ItalianChef() {

  std::cout << "ItalianChef " << name << " destructed" << std::endl;

}

// getName
std::string ItalianChef::getName() const {

  std::cout << "ItalianChef::getName() called" << std::endl;
  return name;

}

// makePasta
void ItalianChef::makePasta() const {

  std::cout << "ItalianChef " << name << " makes pasta" << std::endl;

}
