#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

int Complex::c_count_ = 0;

Complex::Complex(): real_(0.0), imag_(0.0) {
  ++c_count_;
  cout << "create info: " << endl;
  cout << "create num " << c_count_ << " complex" << endl;
  cout << "Default constructor" << endl;
  cout << "(0+0i), address: " << this << endl;
}

Complex::Complex(double r, double i): real_(r), imag_(i) {
  ++c_count_;
  cout << "create info: " << endl;
  cout << "create num " << c_count_ << " complex" << endl;
  cout << "Parameterized constructor " << endl;
  cout << "(" << r << " + " << i << "i) " << ", address : " << this << endl;
}

Complex::~Complex() {

  --c_count_;
  cout << "xigou info: " << endl;
  cout << "(" << real_ << "+" << imag_ << "i), Address: " << this << "is be free" << endl;
}

double Complex::getReal() const {
  return real_;
}

double Complex::getImag() const {
  return imag_;
}

int Complex::get_conut() {
  return c_count_;
}


void Complex::setReal(double r) {
  real_ = r;
}

void Complex::setImag(double i) {
  imag_ = i;
}

Complex& Complex::operator =(const Complex& other) {
  if(this == &other)
  {
    return *this;
  }
  real_ = other.real_;
  imag_ = other.imag_;
  return *this;
}

