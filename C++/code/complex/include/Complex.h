#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
  private:
    double real_;
    double imag_;
    static int c_count_;

  public:
    Complex();
    Complex(double r, double i);

    ~Complex();

    double getReal() const;
    double getImag() const;
    static int get_conut();

    void setReal(double r);
    void setImag(double i);

    Complex &operator=(const Complex &other);
};

#endif
