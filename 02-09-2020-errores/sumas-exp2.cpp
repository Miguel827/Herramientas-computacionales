//Este codigo realiza la expansion de la función seno de tres formas
//y se comparan para ver su precision
#include <iostream>
#include <cstdlib>

typedef double REAL;

REAL sum1(int N);
REAL sum2( int N);
REAL sum3( int N);

int main(void)
{
  //declarar un N maximo
  //hacer un for para variar N
  //imprimir
  std::cout.precision(15);                //precision de cifras decimales
  std::cout.setf(std::ios::scientific);   //Escritura en notación cientifica
  std::cout << sum1(10) << "\n";           //se imprime la funcion sum1 con argumento 10
  std::cout << sum2(10) << "\n";
  std::cout << sum3(10) << "\n";
}

REAL sum1(int N)
{
  REAL sum = 0;
  int sign = -1;
  for(int n = 1; n <=2*N; n++)
    {
      sum += sign*1.0*n/(n+1);
      sign *= -1;
    }
  return sum;
}
REAL sum2( int N)
{
  REAL suma1 = 0, suma2 = 0;
  for(int n = 1; n <=N; n++)
    {
      suma1 += (2.0*n-1)/(2.0*n);
      suma2 += (2.0*n)/(2.0*n+1);
    }
  return suma2 - suma1;
}

REAL sum3(int N)
{
  REAL sum = 0;
  for(int n = 1; n <=N; n++)
    {
      sum += 1.0/(2.0*n*(2.0*n+1));
    }
  return sum;
}
