/**
 * @file main.cpp
 * @author Bryan Cortés
 * @brief  Funcion main 
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#include "funciones.hpp"
#include "MaterialPrecio.hpp"

int main(){
    MaterialOrdenado biblioteca;
    MaterialPrecio lista;
    while (true){
        menu();
        selecionarOpcion(&biblioteca, &lista);

    }
    return 0;
}