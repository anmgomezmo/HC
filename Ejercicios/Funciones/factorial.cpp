#include <iostream>

int fact(int y);

int main (){
  int x;
  std::cout << "Ingrese un numero entero positivo: ";
  std::cin >> x;
  std::cout << "El factorial de " << x << " es: " << fact(x) << "\n";
  return 0;
}


//Funcion factorial para numeros enteros positivos 
int fact(int y){
  int f=y;
  for(int val = y-1; val > 0; val = val-1){
    f=f*val;
  }
  return f;
}
