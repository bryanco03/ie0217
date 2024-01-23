#ifndef IMPRIMIRMATRIZ_HPP
#define IMPRIMIRMATRIZ_HPP
#include <iostream>
#include <iomanip>


template<class T>
class ImprimirMatriz{
    public:

        void mostrarMatriz(T matriz);
        void mostrarMatrizCompleja(T Matriz);
};



#include"ImprimirMatriz.cpp"

#endif