#include "expr.h"
#include <iostream>
Expr::Expr(double left, char op, double right)
           :left_vla_(left), op_(op), right_vla_(right) {

}
Expr::~Expr() {
  std::cout << "left vla = " << left_vla_ << "op = " << op_ << "right = " << right_vla_ << '\n';

}
Expr::Expr(const Expr& other)
          : left_vla_(other.left_vla_), op_(other.op_), right_vla_(other.right_vla_)
          {
            std::cout << "expr cp finish" << '\n';
            std::cout << "left vla = " << left_vla_ << "op = " << op_ << "right = " << right_vla_ << '\n';
          }
