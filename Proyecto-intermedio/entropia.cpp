#include <iostream>
#include <math.h>

int main(int argc, char **argv)
{

  int NCELLS = 64;
  double pi=1.0;
  double s = 0.0;

  for(int i = 1; i <= NCELLS; i++)
    {
      pi = 1.0/i;
      s += (-1)*pi*log(pi);

      std::cout << i << " \t" << s << std::endl;
    }
 

  return 0;
}


//std::cout << s << std::endl;

/*int a = 0;
  for(int i = NCELLS; i >= 1; i--)
    {
      a = i;    
      std::cout << a << std::endl;
    }
*/
