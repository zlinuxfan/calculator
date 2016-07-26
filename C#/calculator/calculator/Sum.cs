using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculator {
    class Sum : BinaryOperation {
        private readonly IOperation _firstOperation; // { get; }
        private readonly IOperation _secondOperation; // { get; }

        public Sum(IOperation firstOperation, IOperation secondOperation) {
            this._firstOperation = firstOperation;
            this._secondOperation = secondOperation;
        }

        public override double Evaluate() {
            return _firstOperation.Evaluate() + _secondOperation.Evaluate();
        }

        public override string ToString() {
            String firstString = this._firstOperation.ToString();
            String secondString = this._secondOperation.ToString();

            if (this._firstOperation.GetDepth() > 0) {
                firstString = "(" + firstString + ")";
            }
            if (this._secondOperation.GetDepth() > 0) {
                secondString = "(" + secondString + ")";
            }

            return firstString + " + " + secondString;
        }

        protected override IOperation FirstArgument() {
            return this._firstOperation;
        }

        protected override IOperation SecondArgument() {
            return this._secondOperation;
        }
    }
}
