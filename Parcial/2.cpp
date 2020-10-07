#include <iostream>

void f1(void);
void f2(void);
void f3(void);
void f4(void);

int main()
{
  f1();
  f2();
  f3();
  f4();

  return 0;
}

void f1(void)
{
  // double b = 1;
  //con -Werror se detecta que no se está utilizando esta variable declarada, como no se usa la quito.
    double *z = new double [100] {0.0}; //aquí pasaba de double a char entonces se cambió para que fuera un new double.
    int a = 2;
    //con -Werror se detecta que no se está utilizando esta variable declarada, sin embargo la utilizo ahora para el argumento del arreglo z pero usando un entero.
    z[a] = 25;
     // aqui se corrije el argumento -1 porque no es una entrada valida del arreglo z. se cambia por 1. El problema se detectó con gdb --tui poniendo un brak point en 20 e imprimiendo allí.
    delete [] z;
}

void f2(void)
{
  char *y = new char [100];
  y[10] = 'a'; //Error detectado con valgraind --tool=memcheck --leak-check=full. no está inicializado el arreglo [10] {?};
  delete [] y;
}

void f3(void)
{
  int x;
  //error detectado con valgrind, no se inicializo x
  //error detectado con -Werror, Se debía indicar el valor de x en el if con
  x=0;
  if(x == 0)
    {
      std::cout << "X is zero: " << x <<"\n";
    }
}

void f4(void)
{
  int x=3; //error detectado con valgrind. no se inicializo el valor de x 
  
  std::cout << "x = " << x << "\n";


  
  int a[10]; //no se utiliza b[10] error detectado con Wall y Werror, además de i y j
  int j[10];
  for ( int i = 0; i < 10; i++ ) {
    j[i] += a[i];
  }
  if ( j[5] = 7 )
    std::cout << "hello there\n";
  // este es un valor que no esntra dentro de la dimension del arreglo. se cambió de 77 a 7. error detectado con Wall y Werror
}
