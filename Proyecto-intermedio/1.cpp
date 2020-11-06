#include <iostream>
#include <math.h>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char **argv)
{
  srand(time(NULL));

  int dim = 10, steps = 5000, nmol = 1000, jump = 0, k = 0, l = 0;
  int M[dim][dim];
  int C[dim][dim];
  int celda = (dim-1)/2;
  

 
  for(int i = 0; i < dim; i++)
    {
      for(int j = 0; j < dim; j++)
	{
	  if( i == celda & j == celda)
	    {
	      M[i][j] = nmol;
	    }
	  else M[i][j] = 0;
	  cout << M[i][j] << "\t";
	}
      cout << endl;
    }

  
    for(int i = 0; i < dim; i++)
    {
      for(int j = 0; j < dim; j++)
	{
	  C[i][j] = 0;
	}
    }
  
  for(int i = 0; i < dim; i++)
    {
      for(int j = 0; j < dim; j++)
	{
	  if(M[i][j] != 0){
	    jump = rand() % (M[i][j]+1);
	    M[i][j] = M[i][j]-jump;
	    k = i-1+rand() % 3;
	    l = j-1+rand() % 3;
	    
	    if(k<0)
	      k = 0;
	    if(k==dim)
	      k = dim-1;
	    if(l<0)
	      l = 0;
	    if(l==dim)
	      l = dim-1;	    
	  C[k][l] = C[k][l]+jump;
	  }
	}
    }

   for(int i = 0; i < dim; i++)
    {
      for(int j = 0; j < dim; j++)
	{
	  M[i][j] = M[i][j]+C[i][j];
	}
    }
  
  
    for(int i = 0; i < dim; i++)
    {
      for(int j = 0; j < dim; j++)
	{
	  cout << M[i][j] << "\t";
	}
       cout << endl;
    }
  cout << endl;
    

 
  
  return 0;
}
