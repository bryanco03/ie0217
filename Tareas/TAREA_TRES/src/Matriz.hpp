/**
 * @file Matriz.hpp
 * @author Bryan Cortés 
 * @brief Declaracion de la Clase Matriz
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef MATRIZ_HPP
#define MATRIZ_HPP
#include<iostream>
#include<vector>
#include <string>
#include <complex>
#include <stdexcept>
#include <limits>
using namespace std;


/**
 * @brief Template de  la Clase Matriz, simboliza la matriz mediante un vector de vectores los cuales contiene los numeros de la matriz, estos pueden ser enteros, reales o complejos
 * 
 */

template<typename T>
class Matriz{  
    public:

    /**
     * @brief Construtor por default de Matriz
     * 
     */
    Matriz() {}

    /**
     * @brief Constructor para crear una matriz la cual es el producto de otra dos matrices
     * 
     */

    Matriz(int filas, int columnas) : datos(filas, std::vector<T>(columnas)) {}


    /**
     * @brief pedirDatos() pide al usuario los datos de la matriz (filas , columnas) y agrega la informacion a datos
     * 
     */

    void pedirDatos();
    /**
     * @brief  pedirDatosComplejos() pide al usuario los datos de la matriz cuando es compuesta por numeros complejos agrega la informacion a datos
     * 
     */
    void pedirDatosComplejos();


    /**
     * @brief Sobrecarga del operador +, para definir la suma entre matrices
     * 
     */
    Matriz<T> operator+(const Matriz<T>& matriz2);

    /**
     * @brief Sobrecarga del operador -, para definir la resta entre matrices
     * 
     */

    Matriz<T> operator-(const Matriz<T>& matriz2);

    /**
     * @brief Sobrecarga del operador *, para definir el producto entre matrices
     * 
     */


    Matriz<T> operator*(const Matriz<T>& matriz2);

    /**
     * @brief procesarOperacion() procesa el cual operacion que el usuario desea realizar con el tipo  de dato que eligio el usuario.
     * 
     * @param string tipoDato Indica cual tipo de dato se va a utilizar
     */
    void procesarOperacion(string tipoDato);




    /**
     * @brief  vector<vector<T>> datos, vector de vectores que continen la informacion de la matriz.
     * 
     */
    vector<vector<T>> datos;

};



#include "Matriz.cpp"

#endif