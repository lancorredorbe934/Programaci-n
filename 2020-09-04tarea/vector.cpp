#include<iostream>
#include<vector>
#include<algorithm>

int main (int argc, char **argv)
    
{
    std::vector<int> data= {3,4,-1,-10,0};

    auto comp = [](int a, int b){return std::abs(a) <std::abs(b); };// funcion lambda que organiza mis elementos
    
    std::sort(data.begin(), data.end(), comp);//organizo los valores del vectore de acuerdo a la indicacion que recibe de la funcion lambda

    for(int ii=0; ii<5; ++ii) {
        std::cout << "data[" << ii <<"]: " << data[ii] << std::endl;
    }

return 0;
} 
