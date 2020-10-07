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
