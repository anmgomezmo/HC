#include <iostream>

int main(){

  int sum = 0, val = 1, bound;
  std::cout << "Ingrese un numero entero: ";
  std::cin >> bound;
  while(val <= bound){
    sum += val;
    ++val; 
  }
  std::cout << "Suma de 1 a " << bound << " inclusivo es: " << sum << "\n";
  return 0;
}


// while se utiliza cuando definimos el contador "val" o "i" en las variables      int, esta fuera de la funcion while.



