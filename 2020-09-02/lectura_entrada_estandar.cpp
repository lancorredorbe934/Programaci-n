#include<iostream>
#include<string>

int main(int rgc, char **argv)
{
  std::string fullname;
  std::cout << "Hola, escribe tu nombre, por favor:\n";
  std::getline(std::cin, fullname);
  std::cout << "Hola, " << fullname << std::endl;

  return 0;

}
