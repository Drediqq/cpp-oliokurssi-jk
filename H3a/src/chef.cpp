#include "chef.h"

Chef::Chef(const std::string &name) : name(name) {
  std::cout << "Chef " << this->name << " constructed" << std::endl;
}

Chef::~Chef() { 
    std::cout << "Chef " << name << " destructed" << std::endl; 
}

void Chef::makeSalad() const {
  std::cout << "Chef " << name << " makes salad" << std::endl;
}
void Chef::makeSoup() const {
  std::cout << "Chef " << name << " makes soup" << std::endl;
}
