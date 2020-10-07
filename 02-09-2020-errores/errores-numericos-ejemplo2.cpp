#include <iostream>
#include <cstdlib>                 //Libreria utilizada para atoi

int main(int argc, char *argv[])
{
//argc cuenta el numero de argumentos en la linea de comandos
//argv guarda los valores de esos argumentos en forma de vector,
//la entrada 0 es el primer valor

  //std::cout << argc << "\n";        Imprime numero de argumentos
  //std::cout <<argv[2] << "\n";      Imprime la entrada deseada del argumento

  double under=1.0, over=1.0;          //Declara variables

  //Se convierte el valor de caracteres a numero utilizando atoi( )
  //ademas se indica que la netrada 1 de la linea de comandos
  //es la que se debe leer
  
  int N = std::atoi(argv[1]);

  std::cout.precision(15);            //precision de cifras decimales
  std::cout.setf(std::ios::scientific);

  for(int ii=0; ii<N; ii++)           //Dentro del for introduce ii
    {
      under /=2.0;                    //Divide under por 2 recursivamente
      over *=2.0;                     //Multiplica over por 2 recursivamente

       std::cout << ii
		 << "\t" << under      //Imprime las variables señaladas
		 << "\t" << over       //"\t" añade un tab 
		 << "\n";              //"\n" añade una linea
    }
  
  return 0;
}

