#include <cstdio>

int main(void){
  double sum = 0;
  for(int N = 1; N <= 1000; ++N){
    sum += 1.0/N;
    std::printf("%5.d %20.16f \n", N, sum);
  }
  return 0;
}
