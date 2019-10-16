#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main (int argc, char **argv)
{
  int ii, jj;
  ii =  0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  
  baz(25.9);

  return EXIT_SUCCESS;
}

int foo(int a, int b)
{
  if(b == 0 or a == 0 or bar(a,b) == 0){
    std::cout << "Division por cero en foo\n";
    return 0;
}
  return a/b + b/bar(a, b) + b/a;
}

int bar(int a, int b)
{
  int c = a;
  return c + a - b;
}

double baz(double x)
{
  if (x == 0) return 0;
  double v = 1-(x+1);
  return std::sqrt(-v);
}
