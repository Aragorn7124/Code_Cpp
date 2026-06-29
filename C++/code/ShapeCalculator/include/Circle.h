#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
  private:
    double radius_;
  public:
    Circle(double r);
    virtual ~Circle();
    double area() const override;
    double perimeter() const override;
};

#endif
