#include<iostream>

int main (int argc, char **argv)

{
    int c= 90;
    for (int ii=0; ii< 3; ++ii){
        auto flambda = [&c, ii](auto a, auto b){
            std::cout << "c: "<< c << std::endl;
            c = 100*ii;
            return a < b;
        };
        bool flag = flambda(2,3.89);
        std::cout << "flag: "<<flag << std::endl;
        std::cout << flambda(3.98, 2) << std::endl;
    }
    
    return 0;
    
}
