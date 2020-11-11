#include<iostream>

int main(int argc, char **argv)
{
    const int N = 20; //memory sie: N*4 -> max 2048000
    int data [N] {1,2};
    const  int * ptr = nullptr;// forma de declarar un puntero nulo-->importante!

    std::cout << "ptr --> " << ptr << std::endl;
    ptr = &N;
    std::cout << "ptr --> " << ptr << std::endl;
    ptr = data;
    std::cout << "ptr --> " << ptr << std::endl;
    ptr = &data[0];
    std::cout << "ptr --> " << ptr << std::endl;
    std::cout << "*(ptr+1) --> " << *(ptr+1) << std::endl;

    data = &N; //error-->aunque data es un puntero, como arreglo se define constante, por lo tanto no puedo cambiarlo de esta manera
return 0;
}
//revise la clase grabada y verifique cómosaer cuál es el valor exacto que mi
//computadora admite
