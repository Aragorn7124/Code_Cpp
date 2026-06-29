#include "Dog.h"
#include "Cat.h"
#include "Duck.h"
#include "Bird.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "----exe start----" << endl;

  Animal *dog = new Dog();
  Animal *cat = new Cat();
  Duck *duck = new Duck();
  Bird *bird = new Bird();

  Animal *pets[] = {dog, cat, duck, bird};
  for (int i = 0; i < 4; i++)
  {
    cout << "Animal" << i + 1 << " say: ";
    pets[i]->makeSound();
  }

  Swimmer *swim = duck;
  swim->swim();

  Flyer *fly[] = {duck, bird};
  fly[0]->fly();
  fly[1]->fly();

  delete dog;
  delete cat;
  delete duck;
  delete bird;
  return 0;
}
