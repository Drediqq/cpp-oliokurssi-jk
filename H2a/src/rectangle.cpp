#include "rectangle.h"

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