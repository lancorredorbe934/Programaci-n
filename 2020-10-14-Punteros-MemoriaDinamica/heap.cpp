#include<iostream>

int main(int argc, char **argv)
{
    const int N = 41000000; 
    //int data [N] {1,2};
    int * data = nullptr;

    //dynamic memory:new

    data = new int [N];

    //use memory

    std::cout << data[0] << std::endl;
    

    //release memory:delete

    delete [] data;
    data = nullptr; 

    return 0;
}
