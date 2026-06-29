#ifndef FLYER_H
#define FLYER_H

class Flyer {
  public:
    virtual ~Flyer() {}
    virtual void fly() const = 0;
};

#endif
