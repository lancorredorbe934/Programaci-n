#include<iostream>

int main(int argc, char **argv)
{
    const int N = 5;
    int data [N] {1}; //array primitivo

    std::cout << data[0] << std::endl; // primer elemeto del array
    std::cout << &data[0] << std::endl;// dirección del primer elemento 
    std::cout << data << std::endl; // dirección del primer elemento
    std::cout << (data+1) << std::endl;// dirección del segundo elemento
    std::cout << *(data + 1) << std::endl;// segundo elemento
   // std::cout << *(data+N) << std::endl;//¿último elemento?--> no, error, se está intentando acceder a una memoria que no está asignada 
    std::cout << *(data+(N-1)) << std::endl;//último elemento
    std::cout << (data+N) << std::endl;// ¿dirección del último elemento?--> no, imprimer cualquier dirección, al compilar no se conidera como un -error- 
    std::cout << (data+(N-1)) << std::endl;

    return 0;
}
