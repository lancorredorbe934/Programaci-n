#include<iostream>

int suma(int m, int n); 

int main(void)
{
  std::cout<< suma(1, 10) <<std::endl;
  std::cout<< suma(200000, 300000) <<std::endl;
  

  return 0;
}

int suma(int m, int n)
{
  int suma=0;
  for(int ii=m; ii<=n; ++ii)
  {
    if((ii%5==0) or (ii%7==0) or (ii%3==0)){
    suma +=ii;
    }
  }
  
  return suma; 
}
