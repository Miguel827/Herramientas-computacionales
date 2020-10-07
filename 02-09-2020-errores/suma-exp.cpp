#include <iostream>
#include <cstdlib>                 //Libreria utilizada para atoi

typedef float REAL;

REAL suma(REAL x, float Nmax);

int main(int argc, char *argv[])
{

  std::cout.precision(7);                //precision de cifras decimales
  std::cout.setf(std::ios::scientific);

  REAL xval = std::atof(argv[1]);
  int N = std::atoi(argv[2]);

  std::cout << suma(xval,N) << "\n";
  
  return 0;
}

REAL suma(REAL x, float Nmax)
{
  REAL sum = 1.0;
  REAL term = 1.0;

  for(int ii=2; ii<Nmax; ii++)
    {
      term = term*(-x)/(ii+1);
	sum = sum + term; 
    }

  return sum;
  
}
