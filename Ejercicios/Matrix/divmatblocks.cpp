#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>


int code_to_be_measured(const double *A, double *B);

int main(void){

  int N = 4;
  double *A = new double [N*N], *B = new double [N*N];
  for(int i = 0;i < N*N;i++){
    A[i] = i*i;
    printf("%f \t",A[i]);
  }
  printf("\n \n");
  for(int i = 0;i < N*N;i++){
    B[i] = i*i;
    printf("%f \t",B[i]);
  }

  printf("\n ---------------------------------------------------------- \n");
  code_to_be_measured(A,B);

  return 0;
}


int code_to_be_measured(const double *A, double *B){

  //for(int p = 0;p <= 13;p++){
  int p = 1;
  int N_b = pow(2,p), N = 4;
  double A_m_n[N_b][N_b];
  
  for(int i = 0;i < N_b;++i){
    for(int j = i*N;j < i*N+N_b;++j){
      A_m_n[j/N][j%N] = A[j];
      printf("%f \t",A_m_n[j/N][j%N]);
    }
  }
  
    //}
  
  return 0;
}
