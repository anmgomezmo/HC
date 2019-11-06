#include <cstdio>

void A(int n,int m);
void B(int n,int m);


int main(void){

  A(3,2);
  B(3,2);
  
  return 0;
}


void A(int n,int m){
  for(int ii = 1;ii <= 100000;++ii){
    int A[n][m]={};
    for(int i = 0;i < n;++i){
      for(int j = 0;j < m;++j){
	printf("%d \t",A[i][j]);
      }
      printf("\n");
    }
  }
}

void B(int n,int m){
  for(int ii = 1;ii <= 100000;++ii){
    int B[n][m] = {};
    for(int j = 0;j < m;++j){
      for(int i = 0;i < n;++i){
	printf("%d \n",B[i][j]);
      }
      printf("\n");
    }
  }
}
