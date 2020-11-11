#include <iostream>
#include <vector>
#include <numeric>

template <class T>
struct Array2D {
           
    public:
    // inner funcionality
        void getmem(int numrows, int numcols); // reserve memory using vector
        void fill(void); // fill according to some rule
        T operator()(int ii, int jj); // overload for indexes <--- NO ENTIENDO ESTO <<<<<----------
        void print(void); // print to screen
        double average(void); // compute the average of all data, use std::accumulate

    private:
        int nr = 0;
        int nc = 0;
        std::vector<double> array;
        
};

int main(int argc, char **argv)
{
    int NR = std::atoi(argv[1]); //3;
    int NC = std::atoi(argv[2]); //6;
    Array2D<double> data;
   // Array2D<int> data;---> ¿SOBRECARGANDO A MI OBJETO'? TIENE SENTIDO DECIER ESO?
    data.getmem(NR, NC);
    data.fill();//argumneto
    data.print();//argumento
    std::cout << "Average: " << data.average() << "\n" ;
    std::cout << data(0, NC/2) << std::endl;
    std::cout << data(NR/2, NC/2) << std::endl;
    std::cout << data(NR/2, 0) << std::endl;

    return 0;
}

template <class T>
void Array2D<T>::getmem(int numrows, int numcols)
{
    nr = numrows;
    nc = numcols;
    array.resize(nr*nc);
}

template <class T>
void Array2D<T>::fill(void){
    for (int ii = 0; ii < nr; ++ii) {
        for (int jj = 0; jj < nc; ++jj) {
            array[ii*nc + jj] = 2*ii+jj;
        }
    }
}

template <class T>
void Array2D<T>::print(void){
    for (int ii = 0; ii < nr; ++ii) {
        for (int jj = 0; jj < nc; ++jj) {
            array[ii*nc + jj] = 2*ii+jj;
            std::cout << array[ii*nc + jj] << "  ";
        }
        std::cout << "\n";
    } 
    std::cout << nc << ", " << nr << std::endl;
  
}

template <class T>
double Array2D<T>::average(void)
{
    
    int sumint= std::accumulate(array.begin(), array.end(), 0);
    double sumdouble = sumint; 
   // std::cout << "nums contains " << array.size() << " elements.\n";
    double average = (sumdouble/ array.size());
    return average; 
}

template <class T>
T Array2D<T>::operator()(int ii, int jj)
{
    return array[ii*nc + jj];
}
 
