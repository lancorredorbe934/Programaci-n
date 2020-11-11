#include<iostream>
#include<cmath>
#include<functional>
//calcular la derivada central del sin
//graficar x--> [0,2*pi] y comparar errores

using fptr = double(double, double);
double f(double x);
double deriv_central(double x, double h);
double deriv_forward(double x, double h);
double richardson(double x, double h, fptr fun);



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
        double error_forward= std::fabs(1 - deriv_forward(x, DX)/std::cos(x));
        double error_central= std::fabs(1 - deriv_central(x, DX)/std::cos(x));
        double error_richardson_central= std::fabs(1 - richardson(x, DX, deriv_central)/std::cos(x));
        double error_richardson_forward= std::fabs(1 - richardson(x, DX, deriv_forward)/std::cos(x));
        std::cout << x
          // << "\t" << f(x)
          // <<  "\t" << deriv_central(x, DX)
                  <<  "\t"<< error_forward        
                  <<  "\t"<< error_central
                  << "\n" << error_richardson_central
                  << "\n"<< error_richardson_forward
                  << "\n";
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


double deriv_forward(double x, double h)
{
    return (f(x+h) - f(x))/h;
}

double richardson(double x, double h, fptr fun)
{
  double D1 = fun(x,h);
  double D2 = fun(x,h/2);
  return (4*D2-D1)/3.0;
}
