#include "Dog.h"
#include <iostream>

using std::cout;
using std::endl;

Dog::Dog() {
  cout << "[Dog constructor]----A Dog is created" << endl;
}

Dog::~Dog() {
  cout << "[Dog destructor]----A Dog is destroyed" << endl;
}

void Dog::makeSound() const{
  cout << "woof! woof!" << endl;
}
