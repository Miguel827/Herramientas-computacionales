#include <iostream>
#include "ejem1.h"
//Este código calcula el factorial de varios números
//El propósito es poderlo testear para corregir errores de forma
//local en la parte del código donde falla, en vez de cambiar todo.


int main(int argc, char **argv)
{
  if (factorial(-1))
    {
  std::cout << factorial(-1) << "\n";
    }
  else if (factorial(1) != 1)
    {
      std::cerr <<"ERROR: factorial(0) !=1\n";
    }
  else if (factorial(2) != 2)
    {
      std::cerr <<"ERROR: factorial(0) !=2\n";
    }
  else if (factorial(10) != 3628800)
    {
      std::cerr <<"ERROR: factorial(0) !=3628800\n";
    }
  else
    {
      std::cout << "Todo anda bien \n";
    }
  // std::cout << factorial(-1) << "\n";
  //std::cout << factorial(0) << "\n";
  //std::cout << factorial(5) << "\n";
  
  return 0;
}
