#include <iostream>
#include <cmath>
#include <cstdio>

#include "sum1.h"
#include "sum2.h"
#include "sum3.h"

int main(void){
  for(int n = 1;n <= 10000; ++n){
    double S1 = sum1(n);
    double S2 = sum2(n);
    double S3 = sum3(n);
    double delta1 = std::fabs((sum1(n) - S3)/S3);
    double delta2 = std::fabs((sum2(n) - S3)/S3);
    std::printf("%10d %10.6e %10.6e %10.6e %10.6e %10.6e \n", n, S1, S2, S3, delta1, delta2);
  }
  return 0;
}

