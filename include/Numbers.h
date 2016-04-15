//
// Created by kde on 4/14/16.
//

#ifndef CPP_CALCULATOR_NUMBERS_H
#define CPP_CALCULATOR_NUMBERS_H

#include "BinaryOperation.h"


class Numbers: public IOperation {
private:
  int number;
public:
  Numbers(int numbers_);
  void setNumbers(int number_);
  void toString();
  double evaluate();
};


#endif //CPP_CALCULATOR_NUMBERS_H
