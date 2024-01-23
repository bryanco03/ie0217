
#include "ImprimirMatriz.hpp"
#include <complex>
#include <iostream>
using namespace std;
template<class T>
void ImprimirMatriz<T>::mostrarMatriz(T matriz){
    for(auto& fila : matriz.datos){
        cout << left << setw(5);
        for(auto& elemento: fila){
            cout << elemento;
            cout << left << setw(5);
        }
        cout << endl;
    }

}

template<class T>
void ImprimirMatriz<T>::mostrarMatrizCompleja( T matriz){

    for (const auto& fila : matriz.datos) {
        for (const auto& elemento : fila) {
            std::cout << std::setw(5) << elemento.real();
            if (elemento.imag() >= 0) {
                std::cout << " + " << elemento.imag() << "i";
            } else {
                std::cout << " - " << -elemento.imag() << "i";
            }
        }
        std::cout << std::endl;
    }
}

