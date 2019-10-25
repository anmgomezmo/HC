#include <cstdio>

int main(void){

  unsigned buf_size = 1024;

  int ia[buf_size];
  for(unsigned i = 0;i <= buf_size-1;++i){
    ia[i] = i*i;
    printf("%d \n",ia[i]);
  }

  int ie[4*7-14];
  printf("%d %d %d \n",ie[0],ie[1],ie[2]);

  int ii[2][2]={0,1,2,3};
  printf("%d %d %d %d \n",ii[1][1],ii[0][1],ii[1][0],ii[0][0]);

  int io[4][4];
  for(int i = 0;i <= 3;++i){
    for(int j = 0;j <= 3;++j){
      io[i][j] = j*j;
    }
    printf("%d %d %d %d \n",io[i][0],io[i][1],io[i][2],io[i][3]);
  }
  
  return 0;
}
