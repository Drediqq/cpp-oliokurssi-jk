#include "src/car.h"

int main() {
  Car newCar("Toyota", "Corolla");
  newCar.setEngine();
  newCar.setWheels();
  newCar.printDetails();

  return 0;
}
