//
// Created by kde on 4/13/16.
//

#include "Sum.h"
#include <iostream>

Sum::Sum() {

}

Sum::Sum(IOperation * firstArg_, IOperation * secondArg_) {
  Sum::setArguments(firstArg_, secondArg_);
}

double Sum::evaluate() {
  return firstArg->evaluate() + secondArg->evaluate();
}

void Sum::setArguments(IOperation * firstArg_, IOperation * secondArg_) {
  Sum::firstArg = firstArg_;
  Sum::secondArg = secondArg_;
}

void Sum::toString() {
  std::cout << "Sum two values" << ", fa: " << firstArg << "\n";
}

IOperation * Sum::firstArgument() {
  return firstArg;
}
IOperation * Sum::secondArgument() {
  return secondArg;
}
