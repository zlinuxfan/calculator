//
// Created by kde on 4/13/16.
//

#ifndef CPP_CALCULATOR_IOPERATION_H
#define CPP_CALCULATOR_IOPERATION_H

// Interface
class IOperation {
public:
  /**
     * Return result of the evaluation of the current operation and all underlying operations.
     *
     * @return Value of this operation
     */
  virtual double evaluate() = 0;

  /**
     * Converts current operation to string representation
     *
     * @return String representation of current operation like "1+4".
     */
  virtual void toString() = 0;

  /**
     * Return a number of nested operations for current operation.
     *
     * @return Value of this operation
     */
//  virtual int getDepth() = 0;

//  virtual ~IOperation();
};


#endif //CPP_CALCULATOR_IOPERATION_H
