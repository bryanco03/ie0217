#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "MaterialOrdenado.hpp"
#include <iostream>
using namespace std;

void menu();

void selecionarOpcion(MaterialOrdenado* material);

void crearMateriales(MaterialOrdenado* material);

void crearMaterialLectura(MaterialOrdenado* material);

void crearMaterialAudiovisual(MaterialOrdenado* material);

void buscarMateriales(MaterialOrdenado* material);

void eliminarMateriales(MaterialOrdenado* material);


#endif