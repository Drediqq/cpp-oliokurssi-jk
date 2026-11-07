#include "rectangle.h"

Rectangle::Rectangle(double width, double height) {
  if (width <= 0 || height <= 0) {
    throw std::invalid_argument(
        "ei voi olla nolla tai vähemmän, eihän sitä olisi silloin olemassa!");
  }
  this->width = width;
  this->height = height;
}
// asettaa leveyden
void Rectangle::setWidth(double newWidth) { 
    width = newWidth; 
}
// asettaa korkeuden
void Rectangle::setHeight(double newHeight) { 
    height = newHeight; 
}
// palauttaa pinta-alan
double Rectangle::getArea() { 
    return width * height; 
}
// palauttaa ympäryksen
double Rectangle::getCircum() { 
    return 2 * (width + height); 
}