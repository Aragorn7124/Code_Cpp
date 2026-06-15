#ifndef EXPR_H
#define EXPR_H

class Expr {
  public:
    Expr(double left, char op, double right);
    ~Expr();
    Expr(const Expr &other);

    friend std::istream& op

  private:
    double left_vla_;
    char op_;
    double right_vla_;

};

#endif

