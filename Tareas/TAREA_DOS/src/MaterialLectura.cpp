/**
 * @file MaterialLectura.cpp
 * @author Bryan Cortés
 * @brief Implementacio de la clase MaterialLectura
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */

#include "MaterialLectura.hpp"

MaterialLectura::MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro):
titulo(titulo), autor(autor), editorial(editorial), genero(genero), estado(estado), numHojas(numHojas), precio(precio), esLibro(esLibro){}

void MaterialLectura::mostrarInfo(){
    cout <<"Hola"<< endl;
}

string MaterialLectura::getTitulo(){
    return titulo;
}

bool MaterialLectura::getEslibro(){
    return esLibro;
}

int MaterialLectura::getPrecio(){
    return precio;
}