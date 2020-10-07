#include <iostream>
#include <cstdlib>

float suma(double x, int Nmax);

int main(int argc, char *argv[])
{
  std::cout.precision(7);
  std::cout.setf(std::ios::scientific);
  double xval = std::atof(argv[1]);
  int N = std::atoi(argv[2]);

  std::cout << suma(xval, N) << "\n";

  return 0;
}
float suma(double x, int Nmax)
{
  double sum = 0;
  for
}

