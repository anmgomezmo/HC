#include <cstdio>
#include <array>

int main(void){
  
  int N = 3;
  int A[N][N];
  for(int i = 0;i < N;++i){
    for(int j = 0;j < N;++j){
      A[i][j] = i + j;
    }
  }

  // Metode using two index (like c++ read a matrix)
  for(int i = 0;i < N;++i){
    for(int j = 0;j < N;++j){
      printf("%d \t",A[i][j]);
    }
  }

  printf("\n \n");
  
  // Metode using a biyective transformation
  for(int k = 0;k < N*N;++k){
    printf("%d \t",A[k/N][k%N]);
  }

  printf("\n \n");

  // Methode using one index for a lineal array
  int B[N*N];
  for(int i = 0;i < N*N;++i){
    B[i] = i*i;
    printf("%d \t",B[i]);
  }

  printf("\n \n");

  /* int *C[N*N];
  for(int i = 0;i < N*N;++i){
    int *C[i] = i*i;
    printf("%d \t",*C[i]);
  }

  printf("\n \n");
  
  printf("%ld \t %ld \n",sizeof(B)/sizeof(B[0]),sizeof(*C)/sizeof(*C[0]));
  */ 
  return 0;
}
