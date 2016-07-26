using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculator {
    abstract class BinaryOperation : IOperation {
        public abstract double Evaluate();
        public abstract override string ToString();
        protected abstract IOperation FirstArgument();
        protected abstract IOperation SecondArgument();
        public int GetDepth() {
            if (FirstArgument().GetDepth() >= SecondArgument().GetDepth()) {
                return FirstArgument().GetDepth() + 1;
            } else {
                return SecondArgument().GetDepth() + 1;
            }
        }

    }
}
