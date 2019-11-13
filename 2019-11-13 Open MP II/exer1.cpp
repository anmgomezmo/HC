#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include "omp.h"

int N = 1000000;
const double XMIN = 0.0;
const double XMAX = 10.0;
double DX = (XMAX - XMIN)/N;

double fun(double x);

int main(void){

  double suma = 0.0;
  std::vector<double> partial;

  //#pragma omp parallel for reduction(+:suma)
  //#pragma omp parallel reduction(+:suma)
#pragma omp parallel 
  {
    int tid = omp_get_thread_num();
    int nthreads = omp_get_num_threads();

    if(0 == tid){
      partial.resize(nthreads);
    }

#pragma omp barrier
  
    int size = N/nthreads;
    double init = tid * size; 
  
    for(int ii = init;ii < init + size;++ii){
      double x = XMIN + ii*DX;
      partial[tid] += fun(x);
    }
    partial[tid] *= DX;
  }

  std::cout << std::accumulate(partial.begin(), partial.end(),0.0) << "\n";
  
  return 0;
}

double fun(double x){

  return x*x;
}
