#include <iostream>
#include<array>//stack
#include<vector>//heap



int main(int argc, char **argv)
{
    const int N = 2000000;
    //int data[N] {0}; array primitivo
    //std::array<int, N> data {0}; // ventaja: el arreglo guarda
    //su tamaño, debe contener la variable N
    std::vector<int> data(0);  //fíjese que ya no me improta el tamaño porque está en la memoria
    // porque está en la memoria dinámica
    data.resize(N);//data.resize(2*N);data.resize(20*N); puedo hacer "lo que se me de la gana" con el tamaño de
                  // con el tamaño de mi vector, a diferencia del arreglo 


    
    //for(int ii = 0; ii < N; ++ii) { // <= N is an error
    //    data[ii] = 2*ii + 1; 
    // }
    std::cout << data.size() << "\n";
    std::cout << data.max_size() << "\n";
  
    int ii= 0;
    for (auto & number : data){ //lo llamamos auto porque el compilador, con esta función, determina automáticamente el tipo de dato que     
        
        number = 2*ii + 1;
        ii++;
    }

    double sum= 0.0; 
    for (auto number : data){ //LO LLAMAMOS AUTO PORQUE EL COMPILADOR, CON ESTA FUNCIÓN, DETERMINA AUTOMÁTICAMENTE EL TIPO DE DATO QUE TIENE DATA

        sum += number;
        //std::cout << number << ' ';
    }

    std::cout << '\n'<< sum;
    
    return 0; 
}
