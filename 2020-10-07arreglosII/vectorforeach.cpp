
#include<iostream>
#include<algorithm>
#include <numeric>
#include<random>
#include<vector>


double statistics1 (const std::vector<double> & data); // se pone el const porque el vetor aunque no implicitamente, también se pasa por referencia
void  fillarray(std::vector<double> & data);

int main (int argc, char **argv)
{
    const int N= 1000;  //
    std::vector<double> array;
    array.resize(N);

    fillarray(array);
    double result = statistics1(array);
    std::cout << result << std::endl;
    
return 0;
}

void  fillarray(std::vector<double> & data)

{  //array filling
    //double x = -19.8765;
    // std::fill(data, data + size, x);//de la libreria algorithmnote que esta es otra forma de llenar un arreglo primitivo (array y array+N) representan el inicio y el final del arreglo
    /*for(auto & val : data){
        
        val = x; 
        }*/
    //Existen otras formas de llenar arreglos que la lbreria numeric nos permite utilizar:
   // std::iota(data, data + size, 1); // (1 + 2 + 3 + 4 + .. + N)/N = N(N+1)/2N = (N+1)/2
    const int SEED = 0;
    std::mt19937 mt(SEED);
    std::uniform_real_distribution<double> dist(0.0, 1.0);
    for (auto & val : data) {
        val = dist(mt);
    }
}


double statistics1 (const std:: vector<double> & data)
{
    double suma= 0.0;
    for(auto val : data){
        suma+= val;
    }

    return   suma/data.size(); 
}



