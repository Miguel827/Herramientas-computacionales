#include <iostream>
#include "ejem1.h"
//Este código calcula el factorial de varios números
//El propósito es poderlo testear para corregir errores de forma
//local en la parte del código donde falla, en vez de cambiar todo.

//comentario para probar git pull

int main(int argc, char **argv)
{
  int n = std::atoi(argv[1]);
  std::cout << "El factorial de" << n << "es: " << factorial(n) << "\n";
  return 0;
}

