#include "Shape.h"
#include <iostream>
 
Shape::Shape(const string & color) {
   this->color = color;
}

string Shape::getColor() const {
   return color;
}
 
void Shape::setColor(const string & color) {
   this->color = color;
}
 
void Shape::print() const {
   std::cout << "Shape of color=" << color;
}
