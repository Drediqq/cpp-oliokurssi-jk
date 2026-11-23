#include "wheel.h"
Wheel::Wheel(int size, std::string type) : size(size), type(std::move(type)) {}

Wheel::Wheel() : size(0), type("") {}

void Wheel::setSize(int newSize) { size = newSize; }

void Wheel::setType(std::string newType) { type = newType; }

std::string Wheel::getType() { return type; }

int Wheel::getSize() { return size; }
