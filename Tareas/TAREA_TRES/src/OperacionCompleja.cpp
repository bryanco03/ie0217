/**
 * @file OperacionCompleja.cpp
 * @author Implementacion de la clase OperacionesComplejas
 * @brief 
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "OperacionCompleja.hpp"


bool OperacionesComplejas::validarSumaResta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2){
    return (matriz1.datos.size() == matriz2.datos.size() && matriz1.datos[0].size() == matriz2.datos[0].size());
}

bool OperacionesComplejas::validarMultiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2){
    return (matriz1.datos[0].size() == matriz2.datos.size());
}

Matriz<complex<double>> OperacionesComplejas::suma(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw invalid_argument("No es posible sumar las matrices. Las dimensiones no son iguales.");
    }

    Matriz<complex<double>> resultado(matriz1.datos.size(), matriz1.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz1.datos[0].size(); ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] + matriz2.datos[i][j];
        }
    }
    return resultado;
}

Matriz<complex<double>> OperacionesComplejas::resta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw invalid_argument("No es posible restar las matrices. Las dimensiones no son iguales.");
    }

    Matriz<complex<double>> resultado(matriz1.datos.size(), matriz1.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz1.datos[0].size(); ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] - matriz2.datos[i][j];
        }
    }
    return resultado;
}

Matriz<complex<double>> OperacionesComplejas::multiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2) {
    if (!validarMultiplicacion(matriz1, matriz2)) {
        throw invalid_argument("No es posible multiplicar las matrices. Las dimensiones no son compatibles.");
    }

    Matriz<complex<double>> resultado(matriz1.datos.size(), matriz2.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz2.datos[0].size(); ++j) {
            complex<double> sum = 0;
            for (size_t k = 0; k < matriz1.datos[0].size(); ++k) {
                sum += matriz1.datos[i][k] * matriz2.datos[k][j];
            }
            resultado.datos[i][j] = sum;
        }
    }
    return resultado;
}
