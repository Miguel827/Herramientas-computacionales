
Miguel Angel Rodríguez Cuervo
------------------------------------------------------------

1.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>

double sumup(int N);
double sumdown(int N);

int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const double exact = M_PI*M_PI/6.0;
    const int NMAX = std::atoi(argv[1]);
    double df = std::fabs(sumup(NMAX) - exact)/exact;
    double dg = std::fabs(sumdown(NMAX) - exact)/exact;
    std::cout << df << "\t" << dg << std::endl;

    return 0;
}
double sumup(int N)
{
  double sum = 0;
  double term = 1;
  for(int i = 1; i <= N; i++)
    {
      term = i*i;
      sum = sum + 1/(term);
    }
  
  return sum;
}
double sumdown(int N)
{
  double sum = 0;
  double term = 1;
  for(int i = N; i >= 1; i--)
    {
      term = i*i;
      sum = sum + 1/(term);
    }
  
  return sum;
}
--------------------------------------------------

2.cpp
#include <cmath>
#include <cstdlib>
#include <iostream>


double myatan(double x, int n);

int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const int NSTEPS = std::atoi(argv[1]);// 53
    const double x = std::atof(argv[2]); // 4.2
    const double exact = std::atan(x);
    double my = myatan(x, NSTEPS);
    double diff = std::fabs(my-exact)/exact;
    std::cout << diff << std::endl;

    return 0;
}


double myatan(double x, int n)
{

  // defino a=2^(-n/2)
  double a_1, a, m, l;
  a_1 = pow(2,n*0.5);
  a = 1/a_1; 
  m = 1/pow(2,n);
  
  // defino b
  double b = x/(1+sqrt(1+(x*x)));

  //defino c, d
  double c = 1, d = 1, f;

   do
    {
      c = (2*c)/(1+a);
      d = (2*a*b)/(1+(b*b));
      d = d/(1+sqrt(1-(d*d)));
      d = (b+d)/(1-(b*d));
      b = d/(1+sqrt(1+(d*d)));
      a = (2*sqrt(a))/(1+a);
      l = 1-a;
    }
   while(l > m);
  f = c*log((1+b)/(1-b));
  return f;
}
