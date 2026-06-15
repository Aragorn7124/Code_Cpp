#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

class display
{
public:
  void valve(const Complex &c);
  void cnt(const Complex &c);
};

int main()
{
  cout << "====exe start====" << endl;

  Complex c1;
  Complex c2(3.0, 4.0);
  display d;

  d.valve(c2);
  d.cnt(c2);

  c1 = c2;
  d.valve(c1);
  d.cnt(c1);

  Complex c3;
  c3 = c1 = c2;
  d.valve(c3);
  d.cnt(c3);

  cout << "====exe over====" << endl;
  return 0;
}

void display::valve(const Complex &c)
{
  cout << "----------------" << endl;
  cout << "display info: " << endl;
  cout << "complex num " << c.get_conut << " (address: " << this << ")" << ":" << endl;
  cout << "(" << c.getReal() << "+" << c.getImag() << "i) " << endl;
  cout << "----------------" << endl;
}

void display::cnt(const Complex &c)
{
  cout << "this complex is num " << c.get_conut() << " complex" << endl;
}
