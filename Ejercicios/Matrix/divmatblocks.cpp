#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>


int code_to_be_measured(const double *A, double *B);
int code_to_be_measured_2(const double *A, double *B);
int code_to_be_measured_3(const double *A, double *B);

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
  printf("\n ---------------------------------------------------------- \n");
  code_to_be_measured_2(A,B);
  printf("\n ---------------------------------------------------------- \n");
  code_to_be_measured_3(A,B);

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
    printf("\n");
  }
  
  //}
  
  return 0;
}



int code_to_be_measured_2(const double *A, double *B){

  int N = 4;
  double a[N][N],b[N][N],c[N][N] = {};

  for(int i = 0;i < N*N;++i){
    a[i/N][i%N] = A[i];
    b[i/N][i%N] = B[i];
  }
  
  for(int i = 0;i < N;++i){
    for(int j = 0;j < N;++j){
      for(int k = 1;k <= N;++k){
	c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
      printf("%f \t",c[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}


int code_to_be_measured_3(const double *A, double *B){

  int N = 4, N_b = 2;
  double a[N][N],b[N][N],C[N][N] = {},c[N_b][N_b] = {};

  for(int i = 0;i < N*N;++i){
    a[i/N][i%N] = A[i];
    b[i/N][i%N] = B[i];
  }
  
  for(int i = 0;i < N_b;++i){
    for(int j = 0;j < N_b;++j){
      for(int l = 0;l < N/N_b;++l){
	for(int k = 0;k < N_b;++k){
	  c[i][j] = c[i][j] + a[i][k] * b[k][j] + a[i][l] * b[l][j];
	}
	printf("%f \t",c[i][j]);
      }
    }
    printf("\n");
  }
  
  return 0;
}
