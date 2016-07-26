using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculator {
    class Variable : IOperation {
        private int _value;

        public Variable(int val) {
            this._value = val;
        }
        public double Evaluate() {
            return this._value;
            //throw new NotImplementedException("Variable.evaluate() is not supported;");
        }
        public override string ToString() {
            return this._value.ToString();
        }
        public int GetDepth() {
            return 0;
        }
    }
}
