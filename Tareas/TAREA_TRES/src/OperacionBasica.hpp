/**
 * @file OperacionBasica.hpp
 * @author Bryan Cortés
 * @brief Implementacion de la clase OperacionesBasicas
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "Matriz.hpp"

/**
 * @brief Clase OperacionesBasicas, la cual implementa métodos para sumar, restar o multiplicar matrices con datos de tipo int o float
 * 
 */

template <typename T>
class OperacionesBasicas{
    public:

        /**
         * @brief validarSumaResta() Verifica si las dimensiones de las dos matrices concuerdan para que sea valido la suma/resta
         * 
         * @param Matriz<T>& matriz1 matriz a sumar/restar
         * 
         * @param Matriz<T>& matriz2 matriz a sumar/restar
         */
        bool validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        /**
         * @brief validarMultiplicacion() Verifica si las dimensiones de las dos matrices concuerdan para que sea valido la multiplicacion
         * 
         * @param Matriz<T>& matriz1 matriz a multiplicar
         * 
         * @param Matriz<T>& matriz2 matriz a multiplicar
         */

        bool validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        /**
         * @brief suma() definicion de suma de matrices se suman elemento por elemento
         * 
         * @param Matriz<T>& matriz1 matriz a sumar
         * 
         * @param Matriz<T>& matriz2 matriz a sumar
         */

        Matriz<T> suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2);


        /**
         * @brief resta() definicion de resta de matrices se restan elemento por elemento
         * 
         * @param Matriz<T>& matriz1 matriz a restar
         * 
         * @param Matriz<T>& matriz2 matriz a restar
         */

        Matriz<T> resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

        /**
         * @brief multiplicacion() definicion de un producto de 2 matrices
         * 
         * @param Matriz<T>& matriz1 matriz a multiplicar
         * 
         * @param Matriz<T>& matriz2 matriz a multiplicar
         */

        Matriz<T> multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

};


#include "OperacionBasica.cpp"




#endif