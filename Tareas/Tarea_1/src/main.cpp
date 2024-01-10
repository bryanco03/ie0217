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
 * @brief main() Se ejecutan las funciones para el funcionamiento del juego
 * 
 * @return int 
 */


int main(){

    int intervalo[2] = {0,20}; /** <Arreglo el cual contiene el numero minimo y maximo donde se va a generar un numero aleatorio >*/
    bool pistasDirectas = true; /** <Variable de tipo bool que indica el modo de juego, si es true el modo es de MAYOR O MENOR, si es false, El modo es Frio o caliente >*/
    bool* ptrPistasDirectas = &pistasDirectas; /** <Puntero que apunta a  pistaDirectas>*/

    srand(time(0)); // Semilla para generar números aleatorios


    while (true)
    {
        menu();
        selecionarOpcion(intervalo, ptrPistasDirectas);
    }
    
    return 0;
}