/**
 * @file Libro.cpp
 * @author Bryan Cortés
 * @brief Implementacion de la clase Libro
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE  2024
 * 
 */

#include "Libro.hpp"

Libro::Libro(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro): 
MaterialLectura(titulo, autor, editorial, genero, estado, numHojas, precio, esLibro){}


void Libro::longuitudLibro(){
    if (numHojas <= 100){
        cout << "El libro es corto" << endl;
    }
    else if (numHojas <= 200){
        cout << "El libro es mediano" << endl;
    }
    else {
        cout << "El libro es largo" << endl;
    }
}

void Libro::mostrarInfo(){
    cout <<"---INFORMACION DEL LIBRO---" <<endl;
    cout << "Titulo: " << titulo <<endl;
    cout << "Autor: " << autor <<endl;
    cout << "Editorial: " << editorial <<endl;
    cout << "Genero: " << genero <<endl;
    cout << "Precio: " << precio << " Colones" << endl;
    cout << "Cantidad de hojas: " << numHojas <<endl;
}