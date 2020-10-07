#include <iostream>             

//Este programa muesra el underlfow y overflow es decir muestra el numero
//para el cual la maquina ya no puede mostrar más numeros porque son o
//muy pequeños (10⁻⁴⁵) o muy grandes (10³⁸)

int main(int argc, char **argv)
{
  float under=1.0, over=1.0;          //Declara variables
  int N=150;                          //Declara Variable

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

