/**
 * @file main.cpp
 * @author Bryan Cortés C22422
 * @brief Funcion main
 * @version 0.1
 * @date 2024-01-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "funciones.hpp"
using namespace std;


/**
 * @brief main() 
 * 
 * @return int 
 */


int main(){

    int intervalo[2] = {0,20};
    bool pistasDirectas = true;
    bool* ptrPistasDirectas = &pistasDirectas;

    srand(time(0)); // Semilla para generar números aleatorios


    while (true)
    {
        menu();
        selecionarOpcion(intervalo, ptrPistasDirectas);
    }
    
    return 0;
}