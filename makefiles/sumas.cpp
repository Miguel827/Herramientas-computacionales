#include <iostream>
#include <cmath>
//Este programa realiza la suma sumup= 1/n de n=1 hasta n=Nmax
////Este programa realiza la suma sumdown= 1/n de n=Nmax hasta n=1
typedef float REAL;

REAL sumup(int Nmax);
REAL sumdown(int Nmax);

int main(void)
{
  for(int nmax=1; nmax<=150; nmax++)
    {
      std::cout << nmax << "\t"
		<<std::fabs(1-sumdown(nmax)/sumup(nmax))
		<<std::endl;
    }
  return 0;
}


REAL sumup(int Nmax)
{
  REAL sum = 0.0;
  for(int i=1; i<=Nmax; i++)
    {
      sum +=1.0/i;
    }
  return sum;
}
REAL sumdown(int Nmax)
{
  REAL sum=0.0;
    for(int i=Nmax; i>=1; i--)
      {
	sum +=1.0/i;
      }
    return sum;
}
