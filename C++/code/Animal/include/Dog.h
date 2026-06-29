#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
  public:
    Dog();
    virtual ~Dog();
    void makeSound() const;
};

#endif
