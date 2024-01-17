
/**
 * @file MaterialAudivisual.cpp
 * @author Bryan Cortes 
 * @brief Implemetacion de la clase MaterialAudiovisual
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */

#include "MaterialAudivisual.hpp"

MaterialAudiovisual::MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula):
titulo(titulo), autor(autor), genero(genero), estado(estado), duracion(duracion), precio(precio), esPelicula(esPelicula) {}

void MaterialAudiovisual::mostrarInfo(){
    cout << "hola" << endl;
}

string MaterialAudiovisual::getTitulo(){
    return titulo;
}

bool MaterialAudiovisual::getEsPelicula(){
    return esPelicula;
}

int MaterialAudiovisual::getPrecio(){ 
    return precio;
}