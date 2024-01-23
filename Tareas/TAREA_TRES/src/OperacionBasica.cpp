#include "OperacionBasica.hpp"

template <typename T>
bool OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& matriz1, const Matriz<T>& matriz2){
    return (matriz1.datos.size() == matriz2.datos.size() && matriz1.datos[0].size() == matriz2.datos[0].size());
}


template <typename T>
bool OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2){
    return (matriz1.datos[0].size() == matriz2.datos.size());
}


template <typename T>
Matriz<T> OperacionesBasicas<T>::suma(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw invalid_argument("No es posible sumar las matrices. Las dimensiones no son iguales.");
    }

    Matriz<T> resultado(matriz1.datos.size(), matriz1.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz1.datos[0].size(); ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] + matriz2.datos[i][j];
        }
    }
    return resultado;
}

template <typename T>
Matriz<T> OperacionesBasicas<T>::resta(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarSumaResta(matriz1, matriz2)) {
        throw invalid_argument("No es posible restar las matrices. Las dimensiones no son iguales.");
    }

    Matriz<T> resultado(matriz1.datos.size(), matriz1.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz1.datos[0].size(); ++j) {
            resultado.datos[i][j] = matriz1.datos[i][j] - matriz2.datos[i][j];
        }
    }
    return resultado;
}

template <typename T>
Matriz<T> OperacionesBasicas<T>::multiplicacion(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
    if (!validarMultiplicacion(matriz1, matriz2)) {
        throw invalid_argument("No es posible multiplicar las matrices. Las dimensiones no son compatibles.");
    }

    Matriz<T> resultado(matriz1.datos.size(), matriz2.datos[0].size());
    for (size_t i = 0; i < matriz1.datos.size(); ++i) {
        for (size_t j = 0; j < matriz2.datos[0].size(); ++j) {
            T sum = 0;
            for (size_t k = 0; k < matriz1.datos[0].size(); ++k) {
                sum += matriz1.datos[i][k] * matriz2.datos[k][j];
            }
            resultado.datos[i][j] = sum;
        }
    }
    return resultado;
}

