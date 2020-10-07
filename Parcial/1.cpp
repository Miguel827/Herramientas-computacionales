#include <iostream>
#include <cmath>
#include <cstdlib>
//Cambio de prueba para hacer el push
float p(float x);
float q(float x);
float r(float x);

int main(int argc, char **argv)
{
    float x = std::atof(argv[1]);
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    std::cout << x << "\t" << p(x) << "\t" << q(x) << "\t" << r(x) << "\n";
    // Escriba acá cuál función usaría siempre y porqué

  return 0;
}
float p(float x)
{
  float f;
  f=pow(1-x,8);

  return f;
}
float q(float x)
{
  float f;
  f=1-(8*x)+(28*x*x)-(56*x*x*x)+(70*x*x*x*x)-(56*x*x*x*x*x)+(28*x*x*x*x*x*x)-(8*x*x*x*x*x*x*x)+(x*x*x*x*x*x*x*x);

  return f;
}
float r(float x)
{
  float f;
  f=1-8*pow(x,1)+28*pow(x,2)-56*pow(x,3)+70*pow(x,4)-56*pow(x,5)+28*pow(x,6)-8*pow(x,7)+pow(x,8);

  return f;
}
