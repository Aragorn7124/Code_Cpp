#ifndef DUCK_H
#define DUCK_H

#include "Animal.h"
#include "Flyer.h"
#include "Swimmer.h"

class Duck: public Animal, public Flyer, public Swimmer {
  public:
    Duck();
    virtual ~Duck();
    void makeSound() const;
    void swim() const;
    void fly() const;
};

#endif
