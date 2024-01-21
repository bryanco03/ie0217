#ifndef MATRIZ_HPP
#define MATRIZ_HPP
#include<iostream>
#include<vector>
#include <string>
#include <complex>
#include"OperacionBasica.hpp"
using namespace std;




template<typename T>
class Matriz{  
    public:
    Matriz() {}

    Matriz(int filas, int columnas) : datos(filas, std::vector<T>(columnas)) {}

    void pedirDatos(bool esComplejo);

    Matriz<T> operator+(const Matriz<T>& matriz2);

    Matriz<T> operator-(const Matriz<T>& matriz2);

    Matriz<T> operator*(const Matriz<T>& matriz2);

    void procesarOperacion(string tipoDato);
    void mostrarMatriz();

    vector<vector<T>> datos;

};



#include "Matriz.cpp"

#endif