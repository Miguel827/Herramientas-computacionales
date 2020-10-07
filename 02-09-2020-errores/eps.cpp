#include <iostream>
#include <cstdlib>                 //Libreria utilizada para atoi

int main(int argc, char *argv[])
{


 
  std::cout.precision(7);               //precision de cifras decimales
  std::cout.setf(std::ios::scientific);
  int N = std::atoi(argv[1]);

  float eps = 1.0;
  float one = 1.0;

  for(int ii=0; ii<N; ii++)           //Dentro del for introduce ii
    {
      eps = eps/2.0;
      one = 1.0 + eps;

       std::cout << ii
		 << "\t" << one      //Imprime las variables señaladas
		 << "\t" << eps       //"\t" añade un tab 
		 << "\n";              //"\n" añade una linea
    }
  
  return 0;
}

