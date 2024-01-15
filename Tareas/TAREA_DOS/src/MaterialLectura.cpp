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