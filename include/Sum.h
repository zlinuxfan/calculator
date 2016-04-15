//
// Created by kde on 4/13/16.
//

#ifndef CPP_CALCULATOR_SUM_H
#define CPP_CALCULATOR_SUM_H


#include "BinaryOperation.h"


class Sum: public BinaryOperation {
private:
  IOperation * firstArg;
  IOperation * secondArg;
public:
  Sum();
  Sum(IOperation *, IOperation *);
  void setArguments(IOperation *, IOperation *);
  void toString();
  double evaluate();
  IOperation * firstArgument();
  IOperation * secondArgument();
};


#endif //CPP_CALCULATOR_SUM_H
