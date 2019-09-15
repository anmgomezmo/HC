#include <cstdio>

int numprimo(int x);
int sumprimo(int j, int k);

int main(void){
  int y;
  std::printf("Ingrese el intervalo: ");
  std::scanf("%d""%d", &j, &k);
  if(numprimo(y) == 0){
    std::printf("El numero %d no es primo \n", y);
  }else{
    std::printf("El numero %d es primo \n", y);
  }
  return 0;
}


int numprimo(int x){
  for(int i = 2; i <= (x/2); i++){
    if(x%i == 0){
      return 0;
      break;
    }
  }
  return 1;
}


int sumprimo(int j, int k){
  if(  ){}
}
