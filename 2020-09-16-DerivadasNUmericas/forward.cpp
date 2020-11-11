#include<iostream>
#include<cmath>


double f(double x);
double deriv_forward(double x, double DX);


int main(int argc, char**argv)
{
    const double DX= 0.01;
    const double XMIN= 0;
    const double XMAX= 2*M_PI;

    const int N = (XMAX-XMIN)/DX;

    for(int ii=0; ii < N; ++ ii){
        double x = (XMIN + ii*DX);
        double error_forward= std::fabs(1 - deriv_forward(x, DX)/std::cos(x));
        std::cout << x << "\t" << f(x) <<  "\t" << deriv_forward(x, DX)<< "\t" << error_forward <<  "\t" << "\n";
    }
    return 0; 
}


double f(double x)
{
    return std::sin(x); 
}


double deriv_forward(double x, double DX)
{   
    return (f(x + DX) - f(x))/DX; 
}
