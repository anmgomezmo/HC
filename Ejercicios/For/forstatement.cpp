#include <iostream>

int main(){

  int sum = 0, upperbound, lowerbound;
  std::cout << "Ingrese las cotas inferior y superior: ";
  std::cin >> lowerbound >> upperbound;
  for(int val = lowerbound; val <= upperbound; ++val){
    sum += val; 
  }
  std::cout << "La suma desde " << lowerbound << " a " << upperbound << " inclusiva es: " << sum << "\n";
  return 0;
}


// for se utiliza cuando definimos el contador "val" o "i" en las variables        int, esta dentro de la funcion for.
