#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "Matriz.hpp"

template <typename T>
class OperacionesBasicas{
    public:
        bool validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        bool validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        Matriz<T> suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        Matriz<T> resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        Matriz<T> multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

};


#include "OperacionBasica.cpp"




#endif