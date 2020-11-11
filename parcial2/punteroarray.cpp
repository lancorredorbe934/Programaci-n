#include<iostream>

int main(void)
{
    double a[10] = {1.0};
    double *b = a;
    *(b + 5) = 7;
    b++;
    *(b+1)= 4;
    std::cout << a[2] + a[5] << "\n";

    return 0; 
}
