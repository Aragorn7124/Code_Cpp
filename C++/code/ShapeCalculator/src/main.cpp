#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int choice = 0;
  while(true)
  {  cout << "----exe start----" << endl;
    cout << "0.Exit exe" << endl;
    cout << "1.Rectangle" << endl;
    cout << "2.Circle" << endl;
    cout << "Enter your choice: " << endl;
    std::cin >> choice;

    Shape *shape = nullptr;

    if(choice == 0)
    {
      cout << "exe Exit" << endl;
      break;
    }

    if(choice == 1)
    {
      double w, h;
      cout << "Enter width and height" << endl;
      std::cin >> w >> h;
      shape = new Rectangle(w, h);
    }

    else if(choice == 2)
    {
      double r;
      cout << "Enter radius" << endl;
      std::cin >> r;
      shape = new Circle(r);
    }

    else
    {
      cout << "Try again" << endl;
      continue;
    }

    cout << "Area: " << shape->area() << endl;
    cout << "Perimeter: " << shape->perimeter() << endl;

    delete shape;
  }
  cout << "----exe end----" << endl;
  return 0;
}
