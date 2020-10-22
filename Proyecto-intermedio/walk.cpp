#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
  srand(time(NULL)); // seed del número aleatorio

  int dim = 10000;        //dimension del vector
  double N =10000.0;         //numero de moleculas
  int A = 0, n = 0;   //variables que cambian el tamaño del nunmero random

  int M [dim];   //vector
  
  double s = 0.0, p = 1.0; //variable entropia y probabilidad.

    for(int k = 2; k <= 5; k++)
      {
	dim = pow(2,k);
	n = N;
	s = 0.0;
	for (int i = 0; i < dim; i++)
	  {
        
	    n = n-A;
	    A = rand() % n;
	    M[i]= A;
	    if(i == dim-1)
	    {
	      M[i] = n;
	    }
            //cout << M[i] << "\t"; -----------matriz--------------  
	  }
    for (int j = 0; j < dim; j++)
      {
	p = M[j]/N;
	  if(p < 10e-2)
	    {
	      p = 1.0;
	    }
	  s += (-1)*(p)*log(p);	  	  	
      }
    cout <<k-1<< " " << s << endl;
    //cout << dim << endl;  
      }
        
    return 0;
}
