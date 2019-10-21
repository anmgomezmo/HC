#include <cstdio>

int main(void){

  int ia[] = {0,2,4,6,8};
  int *ip = & ia[3];
  int *ipp = ia + 1;

  printf("%d %p \n %d %p \n",*ip, ip, *ipp, ipp);

  int a[5] = {0,2,4,6,8};
  for(int j = 0;j < 5;j++){
    int *i = a + j; 
    printf("%d \t %p \n",*i, i);
  }
  
  return 0;
}
