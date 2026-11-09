
#include "animal.h"
#include <iostream>

Animal::Animal() { }
Animal::~Animal() { }
void Animal::callOut() { std::cout << "Eläin ääntelee." << std::endl; }