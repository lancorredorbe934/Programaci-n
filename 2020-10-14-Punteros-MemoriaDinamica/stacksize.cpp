#include<iostream>

int main(int argc, char **argv)
{
    const int N = 2093970; //memory sie: N*4(bites)-> max 2048000 (se divide el maxsize del stack entre 4 y se multiplica por 1024(kbyte) eso es: 2097152,
    //sin embargo el máximo, al compilar, que permite es el valor que se observa, lo que indica que hay una pequeña reserva que no se útiliza) 
    int data [N] {1,2};
    const  int * ptr = nullptr;

    return 0;
}

