#include <iostream>

int mcd(int v1, int v2);

int main (){
  std::cout << "Ingrese dos numeros: ";
  int i, j;
  std::cin >> i >> j;
  std::cout << "mcd: " << mcd(i, j) << "\n"; 
  return 0;
}


// devuelve el maximo comun divisor
int mcd(int v1, int v2){
  while(v2){
    int temp = v2;
    v2 = v1 % v2;
    v1 = temp;
  }
  return v1;
}
