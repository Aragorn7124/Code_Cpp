#include "Duck.h"
#include <iostream>

using std::cout;
using std::endl;

Duck::Duck() {
  cout << "[Duck constructor]----A duck is created" << endl;
}

Duck::~Duck() {
  cout << "[Duck destructor]----A duck is destroyed" << endl;
}

void Duck::makeSound() const{
  cout << "Quack! Quack!" << endl;
}

void Duck::swim() const{
  cout << "Duck is swimming" << endl;
}

void Duck::fly() const{
  cout << "Duck is fly" << endl;
}
