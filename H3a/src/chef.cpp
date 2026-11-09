#include "chef.h"
#include <iostream>

// constructor
Chef::Chef(const std::string &name) : name(name) {

  std::cout << "Chef " << this->name << " constructed" << std::endl;

}

// destructor
Chef::~Chef() {

  std::cout << "Chef " << name << " destructed" << std::endl; 

}

// makeSalad
void Chef::makeSalad() const {

  std::cout << "Chef " << name << " makes salad" << std::endl;

}

// makeSoup
void Chef::makeSoup() const {

  std::cout << "Chef " << name << " makes soup" << std::endl;

}
