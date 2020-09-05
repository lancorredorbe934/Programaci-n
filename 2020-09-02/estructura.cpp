#include <iostream>

int main (int argc, char**argv) //int main siempre debe existir--> retorna al sistema operativo
{
  std::cout<< argc << std::endl;//imprima la cantidad de terminos compilados en la consola.
  std::cout<< argv[0] << std::endl;//imprima los terminos dela posiciòn 0,1 y2  compilados en la consola 
  std::cout<< argv[1] << std::endl;
  std::cout<< argv[2] << std::endl;
  return(0);
}
