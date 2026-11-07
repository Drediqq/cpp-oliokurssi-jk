#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdexcept>

// Rectangle
class Rectangle {
private:
  double width;  // suorakulmion leveys
  double height; // suorakulmion korkeus

public:
  // oletuskonstruktori
  Rectangle() {
    width = 1;
    height = 1;
  }

  // parempi konstruktori
  Rectangle(double width, double height);

  // metodit
  void setWidth(double);  // asettaa leveyden
  void setHeight(double); // asettaa korkeuden
  double getArea();       // palauttaa pinta-alan
  double getCircum();     // palauttaa ympäryksen
};

#endif // RECTANGLE_H