#include<iostream>

int main(int argc, char**argv)

{

  double x= -9.6e3; //64 bits, 8 bytes, 1.0e-16,
  //cantidad de bits que utiliza cada tipo de variables
  std::cout << sizeof(short int) <<std::endl;
  std::cout << sizeof(int) <<std::endl;
  std::cout << sizeof(long int) <<std::endl;

  return 0;

}
