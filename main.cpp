#include <iostream>
#include "Sum.h"
#include "Numbers.h"

using namespace std;

int main() {

  IOperation * firstArgument = new Numbers(7),
             * secondArgument = new Numbers(3);

    Sum * sum = new Sum(firstArgument, secondArgument);

    sum->toString();
  std::cout << sum->firstArgument() << "\n";

    return 0;
}