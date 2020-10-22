#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
  srand(time(NULL)); // seed del número aleatorio

  int dim = 4;           //dimension del vector, este cambia
  double N =10.0;         //# de moleculas. es double porque p=#/N
  int A = 0, n = 0, m = 4;    //variables que cambian el tamaño del nunmero random
  int step = 5;
  
  int V [dim];   //vector
  
  double s = 0.0, p = 1.0; //variable entropia y probabilidad.

  for(int k = 0; k < step ; k++)  //esto varía el rango del vector
      {
        dim = m;
	n = N;                   
	s = 0.0;               
	for (int i = 0; i < dim; i++)
	  {
        
	    n = n-A;
	    A = rand() % n;
	    V[i]= A;
	    if(i == dim-1) 
	    {
	      V[i] = n;
	    }
            //cout << V[i] << "\t"; -----------matriz--------------  
	  }
    for (int j = 0; j < dim; j++)
      {
	p = V[j]/N;
	  if(p < 10e-2)
	    {
	      p = 1.0;
	    }
	  s += (-1)*(p)*log(p);	  	  	
      }
    cout <<k<< " " << s << endl;
    //cout << dim << endl;  
    for(int l = 0; l < dim; l++)
      {
	if(V[l] != 0)
	  {
	    m +=3;
	  }
      }
      }
        
    return 0;
}
