#include <iostream>
#include "expr.h"

int main()
{
  std::cout << "main OK" << std::endl;

  Expr ts_expr(32, '+', 14);

  {
    std::cout << "cp in zuoyongyu" << '\n';
    Expr cp_expr = ts_expr;
    std::cout << "cp out zuoyongyu " << '\n';
  }

  std::cout << "ts_expr alive";
  return 0;
}
