#include<iostream>
#include<cmath>

//calcular la derivada central del sin
//graficar x--> [0,2*pi] y comparar errores


double f(double x);
double deriv_central(double x, double h);


int main(int argc, char**argv)
{
   // const int N= 100;            Esta es otra forma de definir el paso de la función, se recomeinda más la de abajo
   // const double H= (2*M_PI-0)/N; 
    const double DX=0.1;
    const double XMIN=0.0; // se recomienda hacer explícitos los valores de Xmin y Xmax
    const double XMAX=2*M_PI;
    const int N=(XMAX - XMIN)/DX;

    for(int ii=0; ii<N; ++ii){
        double x=XMIN + ii*DX;
        double error_central= std::fabs(1 - deriv_central(x, DX))/std::cos(x);
        std::cout << x << "\t" << f(x) <<  "\t" << deriv_central(x, DX) <<  "\t"<< error_central << "\n";
         }

return 0 ;
}


double f(double x)
{
return std::sin(x);
}


double deriv_central(double x, double DX)
{
    return (f(x+DX*0.5)-f(x-DX*0.5))/(DX);
    
}

