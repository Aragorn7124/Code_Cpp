#include "Cat.h"
#include <iostream>

using std::cout;
using std::endl;

Cat::Cat() {
  cout << "[Cat constructor]----A Cat is created" << endl;
}

Cat::~Cat() {
  cout << "[Cat destructor]----A Cat is desturyed" << endl;
}

void Cat::makeSound() const{
  cout << "Meow! Meow!" << endl;
}
