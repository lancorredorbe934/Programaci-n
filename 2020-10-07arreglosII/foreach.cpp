#include<iostream>
#include<algorithm>
#include <numeric>
#include<random>


double statistics1( const double data [], int size); //importante delcarar como constante el arreglo porque los arreglos siempre se pasan por referencia y no queremos que cambie 
void  fillarray(double data [], int size);



int main (int argc, char **argv)
{
    int N= 99;
    double array[N] {0.0};

    fillarray(array, N);
    double result = statistics1(array, N);
    std::cout << result << std::endl;
    
return 0;
}

double statistics1(const double data[], int size)
{
    double mean = 0;
    
    for(int ii=0; ii < size; ++ii){
       // std::cout<< data[ii]<< std::endl;
        mean+= data[ii];
    }

    return   mean/size; 
}


void fillarray(double data [], int size)

{  //array filling
    //double x = -19.8765;
    // std::fill(data, data + size, x);//de la libreria algorithmnote que esta es otra forma de llenar un arreglo primitivo (array y array+N) representan el inicio y el final del arreglo
    /*for(auto & val : data){
        
        val = x; 
        }*/
    //Existen otras formas de llenar arreglos que la lbreria numeric nos permite utilizar:
    std::iota(data, data + size, 1); // (1 + 2 + 3 + 4 + .. + N)/N = N(N+1)/2N = (N+1)/2
    const int SEED = 0;
    std::mt19937 mt(SEED);
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    for (int ii = 0; ii < size; ++ii) {
        data[ii] = dist(mt);
    }
}



