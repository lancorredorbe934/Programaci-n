#include<iostream>
#include<cstdlib>

int next_collatz_term(int & n);
int maximum_collatz(int n0, int & maxval, int & n0max);



int main (int argc, char **argv)
{
    int  maxval=-1, n0max=-1;
    int  N= std::atoi(argv[1]);
    int  n0=N; 
    for(int ii=1; n0 != 1; ++ii){
        n0= next_collatz_term(n0);
        
        if(n0<N){ 
            maxval= maximum_collatz(n0,maxval,n0max);
        }
    }
    std::cout << n0max << "->" << maxval <<std::endl;
return 0;
}


int next_collatz_term(int & n)
{

    if (n == 1) return 1 ;
    if(n%2 == 0) return n/2;
    else return 3*n+1;
} 

int maximum_collatz(int  n0, int &  maxval, int & n0max)
{
    int n1=0; 
    n1= next_collatz_term(n0);
    if(maxval <= n1){
        maxval=n1;
        n0max=n0;
    }
    return maxval;
    
}
