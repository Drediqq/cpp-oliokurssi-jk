#include "italianchef.h"

ItalianChef::ItalianChef(const std::string &name) : Chef(name) {
  std::cout << "ItalianChef " << this->name << " constructed" << std::endl;
}
ItalianChef::~ItalianChef() {
  std::cout << "ItalianChef " << name << " destructed" << std::endl;
}
std::string ItalianChef::getName() const {
  std::cout << "ItalianChef::getName() called" << std::endl;
  return name;
}
void ItalianChef::makePasta() const {
  std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}
