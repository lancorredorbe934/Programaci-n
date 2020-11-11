# include <iostream>
# include <vector>
# include <cmath>
# include <functional>
# include <cstdlib>

using fptr = double(double);
using fptr2 = double(fptr, double, double, int);

double f(double x);
double trapezoid(fptr fun, double a, double b, int n);
double richardson(fptr2 alg, fptr func, double a, double b, double eps);

int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const double eps = std::atof(argv[1]);
    std::cout << richardson(trapezoid, f, 0, 1, eps) << "\n";
   
    return 0;
}

double trapezoid(fptr fun, double a, double b, int n)
{
    double h=(b-a)/n;
    double suma = 0.5*(fun(a) + fun(b));
    for(int ii=1; ii < n-1; ++ii){
        double xi= a + ii*h;
        suma += fun(xi);
    }
    return h*suma; 
}

double richardson(fptr2 alg, fptr func, double a, double b, double eps)
{
   
    for (int n=1;  ;n=2*n){
        double val1 = (4*alg(func, a, b, 2*n) - alg(func, a, b, n))/3;
        double val2 = (4*alg(func, a, b, 4*n) - alg(func, a, b, 2*n))/3;
        double diff = std::fabs(1-val1/val2);

        if(diff < eps){

            std::cout<< "n: "<< 2*n << std::endl;
            std::cout << "diff: " << diff << std::endl;
            return val2;
        }
    }
     
}

double f(double x)
{
  return  std::pow(x, 0.1)*(1.2-x)*(1-std::exp(20*(x-1)));
}
