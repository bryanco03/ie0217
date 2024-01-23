/**
 * @file ImprimirMatriz.hpp
 * @author Bryan Cortés
 * @brief Declaracion de la clase ImprimirMatriz
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */
#ifndef IMPRIMIRMATRIZ_HPP
#define IMPRIMIRMATRIZ_HPP
#include <iostream>
#include <iomanip>


/**
 * @brief Clase ImprimirMatriz, para mostrar matrices de tipo int, float o complex
 * 
 */

template<class T>
class ImprimirMatriz{
    public:

        /**
         * @brief mostrarMatriz() método para mostrar matrices compuestas por int  o floats
         * 
         * @param T matriz matriz compuestas con ints o floats
         * 
         */
        void mostrarMatriz(T matriz);

        /**
         * @brief mostrarMatrizCompleja() método para mostrar matrices compuestas de numeros complejos de la forma a +bi
         * 
         * @param T matriz matriz compuestas con numeros complejos
         */
        void mostrarMatrizCompleja(T Matriz);
};



#include"ImprimirMatriz.cpp"

#endif