#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
  int horsepower;
  double displacement;

public:
  Engine();
  Engine(int horsepower, double displacement);

  void setHorsepower(int);
  void setDisplacement(double);

  int getHorsepower();
  double getDisplacement();
};

#endif