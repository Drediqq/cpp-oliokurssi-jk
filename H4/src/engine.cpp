#include "engine.h"

Engine::Engine() : horsepower(0), displacement(0.0) {}

Engine::Engine(int horsepower, double displacement)
    : horsepower(horsepower), displacement(displacement) {}

void Engine::setHorsepower(int newHorse) { horsepower = newHorse; }

void Engine::setDisplacement(double newDis) { displacement = newDis; }

int Engine::getHorsepower() { return horsepower; }

double Engine::getDisplacement() { return displacement; }