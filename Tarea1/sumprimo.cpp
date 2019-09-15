#include <cstdio>

int numprimo(int x);
int sumprimo(int j, int k);

int main(void){
  std::printf("La suma de numeros primos entre %d y %d es: %d \n", 500, 12400, sumprimo( 500, 12400));
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
  int sum = 0, c = 0;
  for(int y = j; y <= k; ++y){
    if(numprimo(y) == 1){
      ++c;
      sum += y;
    }
  }
  std::printf("Cantidad de numeros primos entre %d y %d: %d \n", 500, 12400, c);
  return sum;
}
