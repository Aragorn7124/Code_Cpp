#ifndef BIRD_H
#define BIRD_H

#include "Flyer.h"
#include "Animal.h"

class Bird: public Flyer, public Animal {
  public:
    Bird();
    virtual ~Bird();
    void makeSound() const;
    void fly() const;
};

#endif
