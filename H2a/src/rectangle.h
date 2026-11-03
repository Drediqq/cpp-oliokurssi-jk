#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdexcept>

// Rectangle
class Rectangle {

public:
  double width;  // suorakulmion leveys
  double height; // suorakulmion korkeus

  // oletuskonstruktori
  Rectangle() {
    width = 1;
    height = 1;
  }

  // parempi konstruktori
  Rectangle(double width, double height) {
    if (width <= 0 || height <= 0) {
      throw std::invalid_argument(
          "ei voi olla nolla tai vähemmän, eihän sitä olisi silloin olemassa!");
    }
    this->width = width;
    this->height = height;
  }

  // metodit
  void setWidth(double);  // asettaa leveyden
  void setHeight(double); // asettaa korkeuden
  double getArea();       // palauttaa pinta-alan
  double getCircum();     // palauttaa ympäryksen
};

#endif // RECTANGLE_H