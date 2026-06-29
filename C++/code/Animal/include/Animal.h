#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
  public:
    Animal(){}

    virtual ~Animal() {}

    virtual void makeSound() const = 0;
};

#endif
