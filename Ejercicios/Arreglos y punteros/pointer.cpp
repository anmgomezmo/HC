#include <cstdio>

int main(void){

  int ival = 1024;
  int *pi = & ival;
  *pi = 1023;

  printf("%d %p \n",*pi,pi);

  int **ppi = & pi;

  printf("%d %p %p \n",**ppi,*ppi, ppi);
  
  return 0;
}
