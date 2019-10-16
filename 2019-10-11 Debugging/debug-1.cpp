#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
  // declare variables
  const int N = 10;
  double * array;
  //reserve memory
  array = new double [N];
  // initialise array
  for (int ii = 0; ii < N; ++ii) {
    array[ii] = 2*(++ii); // != 2*(ii++) ? 
  }
  // print some values 
  int idx = 2;
  std::cout << array[idx] << std::endl;
  idx = 10;
  std::cout << array[idx] << std::endl; // compiles, but ... 
<<<<<<< HEAD

=======
  std::cout << 1/0 << std::endl;
>>>>>>> e16c1e8f0b1d2b36cefa8add22666fadb74f5781
  // free memory
  delete [] array;

  return EXIT_SUCCESS;
}
