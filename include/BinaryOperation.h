//
// Created by kde on 4/13/16.
//

#ifndef CPP_CALCULATOR_BINARYOPERATION_H
#define CPP_CALCULATOR_BINARYOPERATION_H

#include "IOperation.h"

//Abstract class
class BinaryOperation: public IOperation {

public:
  virtual IOperation * firstArgument() = 0;
  virtual IOperation * secondArgument() = 0;
  virtual double evaluate() = 0;
  virtual void toString() = 0;
//  IOperation secondOperation();
//  int getDepth();

//  virtual ~BinaryOperation();
};


#endif //CPP_CALCULATOR_BINARYOPERATION_H
