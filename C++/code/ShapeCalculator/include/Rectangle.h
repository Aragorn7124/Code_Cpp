#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
  private:
    double width_;
    double height_;
  public:
    Rectangle(double w, double h);
    ~Rectangle();
    double area() const override;
    double perimeter() const override;
};

#endif
