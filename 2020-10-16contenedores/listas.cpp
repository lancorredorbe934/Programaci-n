#include <algorithm>
#include <iostream>
#include <list>
#include<cmath>
 
int main()
{
    // Create a list containing integers
    std::list<int> l = { 7, 5, 16, 8 };
 
    // Add an integer to the front of the list
    l.push_front(25);
    // Add an integer to the back of the list
    l.push_back(13);
 
    // Insert an integer before 16 by searching
    auto it = std::find(l.begin(), l.end(), 16);
    if (it != l.end()) {
        l.insert(it, 42);
    }
 
    // Iterate and print values of the list
    for (int n : l) {
        std::cout << n << '\n';
    }

    std::cout << "empty: " << l.empty() << std::endl;
    std::cout<< "size: " << l.size() << std::endl;
    std::cout <<"max_size: " << l.max_size() << std::endl; //cantidad de enteros que se puede guardar
    
    std::cout << "Default sort..." << std::endl; 
    l.sort(); 
    for (int n : l) {
        std::cout << n << '\n';
    }

    std::cout << "Custom sort..." << std::endl; 
    l.sort([](int m, int n){return std::abs(n)>std::abs(m); });//usamos una funcion lambda
    //así, podemos usar cualquier criterio, con la fun lambda para organizar nuestro 
    for (int n : l) {
        std::cout << n << '\n';
    }//fíjese que el sort está acompañad de un ciclo for que me permite mover en mi lista para reconocer mis valores

    std::cout << "Custom sort..." << std::endl; 
    l.sort([](int m, int n){return std::sqrt(n)>std::sqrt(m); });//usamos una funcion lambda
    //así, podemos usar cualquier criterio, con la fun lambda para organizar nuestro 
    for (int n : l) {
        std::cout << n << '\n';
    }//fíjese que el sort está acompañad de un ciclo for que me permite mover en mi lista para reconocer mis valores

     std::cout << "Custom sort..." << std::endl; 
    l.sort([](int m, int n){return std::log(n)>std::log(m); });//usamos una funcion lambda
    //así, podemos usar cualquier criterio, con la fun lambda para organizar nuestro 
    for (int n : l) {
        std::cout << n << '\n';
    }//fíjese que el sort está acompañad de un ciclo for que me permite mover en mi lista para reconocer mis valores
    
}
