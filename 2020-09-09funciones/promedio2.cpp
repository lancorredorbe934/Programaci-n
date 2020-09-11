#include <iostream>
#include <cstdlib>

double  promedio(double x, double y);

int main(int argc, char **argv[])
{
  double z=0;
  double x= std::atof(argv[1]);
  double y= std::atof(argv[2]); 
  z=promedio(x,y);
  std::cout<< z<<std::endl;
  return 0; 
}

double  promedio(double x, double y)
{
  double result=0;
  result=(x+y)/2;
  return result;
}
