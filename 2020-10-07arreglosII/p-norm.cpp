#include <iostream>
#include <cstdlib>
#include <vector>
#include <random>
#include <cmath>

double pnorm(const std::vector<double> & data, int P);

int main(int argc, char *argv[])
{
  //read command line parameters
  const int N = std::atoi(argv[1]);
  const int P = std::atoi(argv[2]);
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  
  // setup random generator to fill the vector
  std::mt19937 gen(0);
  std::uniform_real_distribution<double> dis(1.0, 2.0);

  // declare and fill the array
  std::vector<double> arr(N);
  int ii = 0;
  for (auto & x : arr) {
    ii++;
    x = dis(gen);
    std::cout << "RANDOM NUMBER " << ii << std::endl;
    std::cout << x << std::endl;
  }
  // call the pnorm function
  std::cout<< "p-norm: " <<  pnorm(arr, P) << std::endl;
  
  return 0;
}

   
double pnorm(const std::vector<double> & data, int P)
{
    double sum = 0;
    for(auto y : data){
        sum += std::pow(y,2);
        //std::cout << sum << std::endl;
    }

    double pnorm = std::pow(sum, (1.0/P));
    return pnorm; 
}
