#include <cstdio>

int numprimo(int x);

int main(void){
  int y;
  std::printf("Ingrese un numero entero: ");
  std::scanf("%d", &y);
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
