#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber(int inter[]);

void menu();

void selecionarOpcion(int intervalo[], bool pistasDirectas);

void jugar(int intervalo[], bool pistasDirectas);

void cambiarIntervalo(int inter[]);

bool cambiarModo(bool pistasDirectas);












#endif