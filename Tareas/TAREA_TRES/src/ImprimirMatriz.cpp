#include "ImprimirMatriz.hpp"
#include <iostream>
#include "Matriz.hpp"
using namespace std; 


template <typename T>
void ImprimirMatriz<T>::mostrarMatriz(const Matriz<T>& matriz){
    for (size_t i = 0; i < matriz.datos.size(); ++i) {
            for (size_t j = 0; j < matriz.datos[0].size(); ++j) {
                cout << matriz.datos[i][j];
                if (j < matriz.datos.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    
}