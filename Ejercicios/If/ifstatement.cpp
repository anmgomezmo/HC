#include <iostream>

int main (){

  std::cout << "Ingrese las dos cotas: ";
  int v1, v2;
  std::cin >> v1 >> v2;
  int lower, upper;
  if(v1 <= v2){
    lower = v1;
    upper = v2;
  }else{
    lower = v2;
    upper = v1;
  }
  int sum = 0;
  for(int val = lower; val <= upper; ++val){
    sum += val;
  }
  std::cout << "La suma de " << lower << " a " << upper << " es: " << sum << "\n";
  return 0;
}
