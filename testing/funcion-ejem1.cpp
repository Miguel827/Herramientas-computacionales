#include "ejem1.h"

long factorial(long n)
{
  //esta funcion declara n! de forma recursiva.
  //primero toma n, si n es menor o igual que 1 retorna si es mayor
  //entonces retorna la n*f(n-1), como el programa no sabe cuanto es f(n-1)
  //vuelve y calcula la función con el argumento n-1 etc.
  // el simbolo ? es if else, y # : # el primero es el if y el segundo el
  // else
  if (n < 0)
    {
      std::cerr << "ERROR: no se pueden computar numeros negativos como "
		<< n << "\n";
      return 0;
    }
  return n <=1 ? 1 : n*factorial(n-1);  
}
