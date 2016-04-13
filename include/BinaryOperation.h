//
// Created by kde on 4/13/16.
//

#ifndef CPP_CALCULATOR_BINARYOPERATION_H
#define CPP_CALCULATOR_BINARYOPERATION_H

#include "IOperation.h"

//Abstract class
class BinaryOperation: public IOperation {
public:
  virtual double evaluate();
  virtual std::string toString();
  virtual IOperation firstOperation();
  virtual IOperation secondOperation();
  int getDepth();

  virtual ~BinaryOperation();
};


#endif //CPP_CALCULATOR_BINARYOPERATION_H
