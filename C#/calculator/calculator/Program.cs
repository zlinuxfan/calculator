using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace calculator {
    class Program {
        
        static void Main(string[] args) {
            Variable var1 = new Variable(1);
            Variable var2 = new Variable(2);
            BinaryOperation opSum = new Sum(var1, var2);
            Console.WriteLine(opSum.ToString() + " = " + opSum.Evaluate());

            Console.Read();
        }
    }
}
