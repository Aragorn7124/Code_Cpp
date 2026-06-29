#include "Bird.h"
#include <iostream>

using std::cout;
using std::endl;

Bird::Bird() {
  cout << "[Bird constructor]----A Bird is created" << endl;
}

Bird::~Bird() {
  cout << "[Bird destructor]----A Cat is desturyed" << endl;
}

void Bird::makeSound() const{
  cout << "Waka! Waka!" << endl;
}

void Bird::fly() const{
  cout << "Bird is fly" << endl;
}
