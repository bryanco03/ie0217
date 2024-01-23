/**
 * @file OperacionCompleja.hpp
 * @author Bryan Cortés
 * @brief Declaraciones de clase OperacionesComplejas
 * @version 0.1
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef OPERACIONESCOMPLEJAS_HPP
#define OPERACIONESCOMPLEJAS_HPP
#include <complex>
#include"Matriz.hpp"


/**
 * @brief  Clase OperacionesComplejas, la cual implementa métodos para sumar, restar o multiplicar matrices con datos de tipo complex
 * 
 */
class OperacionesComplejas{

        public:
        /** 
         * @brief validarSumaResta() Verifica si las dimensiones de las dos matrices concuerdan para que sea valido la suma/resta
         * 
         * @param Matriz<complex<double>> matriz1 matriz a sumar/restar
         * 
         * @param Matriz<complex<double>> matriz2 matriz a sumar/restar
         * 
         * @return false Si la operacion no es valida
         * @return true si la operacion es valida
         */
        bool validarSumaResta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        /** 
         * @brief validarMultiplicacion() Verifica si las dimensiones de las dos matrices concuerdan para que sea valido la multiplicacion
         * 
         * @param Matriz<complex<double>> matriz1 matriz a multiplicar
         * 
         * @param Matriz<complex<double>> matriz2 matriz a sumar/restar
         * 
         * @return false Si la operacion no es valida
         * @return true si la operacion es valida
         */


        bool validarMultiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);


        /**
         * @brief suma() definicion de suma de matrices se suman elemento por elemento
         * 
         * @param Matriz<complex<double>> matriz1 matriz a sumar
         * 
         * @param Matriz<complex<double>> matriz2 matriz a sumar
         * 
         * @return Matriz<complex<double>> matriz resultado de la suma de matriz1 y matriz2
         */

        Matriz<complex<double>> suma(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        /**
         * @brief resta() definicion de suma de matrices se restan elemento por elemento
         * 
         * @param Matriz<complex<double>> matriz1 matriz a restar
         * 
         * @param Matriz<complex<double>> matriz2 matriz a restar
         * 
         * @return Matriz<complex<double>> matriz resultado de la resta de matriz1 y matriz2
         */

        Matriz<complex<double>> resta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        /**
         * @brief Multiplicacion() definicion de multiplicacion de dos matrices
         * 
         * @param Matriz<complex<double>> matriz1 matriz a multiplicar
         * 
         * @param Matriz<complex<double>> matriz2 matriz a multiplicar
         * 
         * @return Matriz<complex<double>> matriz resultado de el producto de matriz1 y matriz2
         */


        Matriz<complex<double>> multiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);


};




#endif