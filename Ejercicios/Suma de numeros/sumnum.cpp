#include <iostream>

int main(){
  // prompt user to enter two numbers  
  std::cout << "Ingresar dos numeros:" << std::endl;
  int v1, v2;       // uninitialized
  std::cin >> v1 >> v2;
  std::cout << "La suma de " << v1 << " y " << v2 << " es: " << v1 + v2 << std::
    endl;
  return 0;
}
