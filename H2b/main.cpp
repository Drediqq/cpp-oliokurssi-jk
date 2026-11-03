#include "src/car.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<Car> carList;
    carList.emplace_back("Audi", "A4", 2005);
    carList.emplace_back("Lada", "Samara", 1995);
    carList.emplace_back("Saab", "900", 1966);
    carList.emplace_back("Toyota", "GR Yaris", 2026);
    carList.emplace_back("Hyundai", "Sonata", 1999);

    for(Car car: carList){
        car.printData();
    }
  return 0;
}
