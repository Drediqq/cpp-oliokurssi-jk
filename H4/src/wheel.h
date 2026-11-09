#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
  int size;
  std::string type;

public:
  Wheel();
  Wheel(int size, std::string type);

  void setSize(int);
  void setType(std::string);

  int getSize();
  std::string getType();
};

#endif