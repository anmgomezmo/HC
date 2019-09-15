#include <cstdio>

int numprimo(int x);
int sumprimo(int j, int k);

int main(void){
  int y, j, k;
  std::printf("Ingrese las cotas del intervalo: ");
  std::scanf("%d %d", &j, &k);
  std::printf("La suma de numeros primos entre %d y %d es: %d \n", j, k, sumprimo(j,k));
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
  int sum = 0;
  for(int y = j; y <= k; ++y){
    if(numprimo(y) == 1){
      std::printf("El numero %d es primo \t", y);
      sum += y;
      std::printf("La suma parcial es: %d \n", sum);
    }
  }
  return sum;
}
