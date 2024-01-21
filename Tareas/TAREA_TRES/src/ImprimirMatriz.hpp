#ifndef IMPRIMIRMATRIZ_HPP
#define IMPRIMIRMATRIZ_HPP

#include "Matriz.hpp"

template<typename T>
class ImprimirMatriz{
    public:
        void mostrarMatriz(const Matriz<T>& matriz);

};


#include "imprimirMatriz.cpp"

#endif