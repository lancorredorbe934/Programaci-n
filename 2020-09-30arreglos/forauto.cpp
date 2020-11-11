#include <iostream>
int main(int argc, char **argv)
{
    const int N = 11;
    int data[N] {0};    
    //for(int ii = 0; ii < N; ++ii) { // <= N is an error
    //    data[ii] = 2*ii + 1; 
    // }

    int ii= 0;
    for (auto & number : data){ //lo llamamos auto porque el compilador, con esta función, determina automáticamente el tipo de dato que     
        
        number = 2*ii + 1;
        ii++;
        
    }

        double sum= 0.0; 
    for (auto number : data){ //LO LLAMAMOS AUTO PORQUE EL COMPILADOR, CON ESTA FUNCIÓN, DETERMINA AUTOMÁTICAMENTE EL TIPO DE DATO QUE TIENE DATA

        sum += number;
        std::cout << number << ' ';
    }

    std::cout << '\n'<< sum;
    
    return 0; 
}





