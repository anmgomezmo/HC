#include <stdio.h>

int main(void)
{
  int a = 9;
#pragma omp parallel //private (a)// num_threads (4)
  { 
    double x = 0;
    printf("Hello, world.\n");
    a += 3;
    //printf("%p\n",&x);
    //printf("%p\n",&a);
    printf("%d\n",a);
  }
  printf("%d\n",&a);
  return 0;
}

//A variable inside of pragma is local (private) and there is no conflict, but a variable outside of the pragma is general (shared) and can has conflict because all the threads try to rewrite the same variable.  
