#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(double w, double h) : width_(w), height_(h) {
  cout << "[Rectangle constructor] w = " << w << " h = " << h << endl;
}

Rectangle::~Rectangle() {
  cout << "[Rectangle destructor]" << endl;
}


double Rectangle::area() const {
  return width_ * height_;
}

double Rectangle::perimeter() const {
  return (2 * (width_ + height_));
}
