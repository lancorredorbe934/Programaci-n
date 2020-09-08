#include<iostream>

//void helloworld(int m);//declaración- mi funcion recibe un entero -m-

void helloworld(int m)//implementación què hace y còmo lo hace
{
  m=35;
  std::cout <<"Hello world ->"<< m <<std::endl; 
}

int main(void)

{
  int m=34;//declaro una variable m que no es la misma declarada en mi funcion hello world
  helloworld(m);
  std::cout<< m<< std::endl;
  return 0;
}


