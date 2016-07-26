using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculator {
    interface IOperation {
        /**
            * Return result of the evaluation of the current operation and all underlying operations.
            *
            * @return Value of this operation
            */
        double Evaluate();
        /**
             * Converts current operation to string representation
            *
            * @return String representation of current operation like "1+4".
            */
        string ToString();
        /**
            * Return a number of nested operations for current operation.
            *
            * @return Value of this operation
            */
        int GetDepth();
    }
}