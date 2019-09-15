#include <cstdio>
#include <fstream>


int main(void){
  std::ofstream fout("datos.txt");
  fout.precision(16);
  double sum = 0.0; 
  for(int N = 1; N <= 1000; ++N){
    sum = sum + 1.0/N;
    fout << N << "\t" << sum << "\n";
  }
  fout.close();
  return 0;
}
