#ifndef SWIMMER_H
#define SWIMMER_H

class Swimmer {
  public:
    virtual ~Swimmer() {}
    virtual void swim() const = 0;
};

#endif
