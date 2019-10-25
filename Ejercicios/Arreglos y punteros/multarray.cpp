#include <cstdio>

void A(void);
void B(void);


int main(void){

  A();
  B();
  
  return 0;
}


void A(void){
  int A[3][2]={{0,1},{3,4},{}};
  for(int i = 0;i < 3;++i){
    for(int j = 0;j < 2;++j){
      printf("%d \t",A[i][j]);
    }
    printf("\n");
  }
}

void B(void){
  int B[3][2]={{0,1},{3,4},{}};
  for(int j = 0;j < 2;++j){
    for(int i = 0;i < 3;++i){
      printf("%d \n",A[i][j]);
    }
    printf("\n");
  }
}
