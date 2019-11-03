#include <cstdio>

int main(void){

  int N = 4;
  for(int i = 0;i <= 15;++i){
    printf("%d/4 \t %d%4 \n %d \t %d \n",i,i,i/N,i%N);
  }
  
  return 0;
}
