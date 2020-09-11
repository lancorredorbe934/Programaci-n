#include <iostream>

double  promedio(double x, double y);

int main(void)
{
  double x= 9.8, y=-10.76, z=0;
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
