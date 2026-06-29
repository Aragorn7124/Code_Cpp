#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

Circle::Circle(double r): radius_(r) {
  cout << "[Circle constructor] r = " << r << endl;
}

Circle::~Circle() {
  cout << "[Circle destructor]" << endl;
}

double Circle::area() const {
  return (3.14 * radius_ * radius_ );
}

double Circle::perimeter() const {
  return (6.28 * radius_);
}


