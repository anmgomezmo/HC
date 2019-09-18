#include <cmath>
#include <fstream>

int sine(double x);

int main(void){
  std::ofstream fout("datos.txt");
  double x = 0.0; //rad
  const int N = 100;
  for(x = 0.1; x < 8.0; x += 0.1){
    double sum = x;
    double term = x;
    for(int ii = 2; ii < N; ++ii){
      term = term*(-1)*x*x/((2*ii)*(2*ii+1));
      sum += term;}
    fout << x << "\t" << sum << "\t" << std::sin(x) << "\n";
  }
  fout.close();
  
  return 0;
}


//int sine(double x){double sum;for(int ii = 1; ii <= N; ++ii){sum = ((-1)^ii)*(x^(2*ii-1))/(2*ii-1)}return;}


//int fact(int (2*ii-1)){int f=(2*ii-1);for(int val = (2*ii-1)-1; val > 0; val = val-1){f=f*val;}return f;}
