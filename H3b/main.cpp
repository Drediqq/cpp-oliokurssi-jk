#include "src/animal.h"
#include "src/dog.h"
#include <iostream>
#include <memory>
#include <vector>

int main() {
  std::vector<std::unique_ptr<Animal>> animals;
  animals.push_back(std::make_unique<Animal>());
  animals.push_back(std::make_unique<Dog>());

  
  for (const auto &animal : animals) {
    animal
        ->callOut(); // Jokainen eläin toteuttaa oman luokkansa callOut-metodin
  }

  return 0;
}
