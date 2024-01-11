/**
 * @file funciones.hpp
 * 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-10
 * 
 * 
 * @copyright Copyright (c) 2024 MIT license
 *   
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
 * @brief generateRandomNumber() Genera un numero aleatorio entre un intervalo
 * 
 * @param intervalo Arreglo el cual contiene el intervalo en el cual se genera el numero aleatorio
 * @return int Numero aleatorio generado
 */
int generateRandomNumber(int intervalo[]);


/**
 * @brief menu() Muestra el menu de opciones
 * 
 */
void menu();

/**
 * @brief selecionarOpcion() Se procesa la opcion selecionada, y se ejecuta esa opcion.
 * 
 * @param intervalo Arreglo el cual contiene el intervalo en el cual se genera el numero aleatorio
 * @param ptrPistasDirectas Puntero el cual apunta la variable tipo bool pistaDirectas, la cual determina el modo de juego.
 */
void selecionarOpcion(int intervalo[], bool* ptrPistasDirectas);

/**
 * @brief jugar() Se ejecuta el juego, el cual se tiene un numero entre un intervalo y el usuario debe adivinarlo, en caso de fallar se le daran pistas, en las cuales hay dos 
 * modos de pistas, las directas, las cuales se indica si el numero a advinar es mayor o menor al numero ingresado, el otro modo solo se indica si esta frio o caliente respecto al numero
 * mientras mas caliente mas cerca, ademas se tiene un maximo  de intentos el cual corresponde a un tercio de la longuitud del intervalo. 
 * 
 * @param intervalo Arreglo el cual contiene el intervalo en el cual se genera el numero aleatorio
 * @param ptrPistasDirectas Puntero el cual apunta la variable tipo bool pistaDirectas, la cual determina el modo de juego.
 */
void jugar(int intervalo[], bool* ptrPistasDirectas);

/**
 * @brief cambiarIntervalo() Cambia el inicio y el final del intervalo.
 * 
 * @param intervalo  Arreglo el cual contiene el intervalo en el cual se genera el numero aleatorio.
 */
void cambiarIntervalo(int intervalo[]);

/**
 * @brief cambiarModo() Cambia
 * 
 * @param ptrPistasDirectas Puntero el cual apunta la variable tipo bool pistaDirectas, la cual determina el modo de juego.
 */


void cambiarModo(bool* ptrPistasDirectas);




#endif