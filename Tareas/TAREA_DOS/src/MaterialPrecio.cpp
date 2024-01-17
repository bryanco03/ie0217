/**
 * @file MaterialPrecio.cpp
 * @author Bryan Cortés
 * @brief Implementacion de la clase MaterialPrecio
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#include "MaterialPrecio.hpp"


void MaterialPrecio::cargarDatos(MaterialOrdenado* material){
    listaElemento.clear();
    materialesAudiovisuales = material->getMaterialesAudiovisuales();
    materialesLecturas = material->getMaterialesLecturas();
    for (auto& material : materialesLecturas){
        Elementos elemento;
        elemento.precio = material->getPrecio();
        cout << elemento.precio <<endl;
        elemento.titulo = material->getTitulo();
        cout << elemento.titulo <<endl;
        if (material->getEslibro()){
            elemento.tipo = "Libro";
        }
        else{
            elemento.tipo =  "Noticia";
        }
        listaElemento.push_back(elemento);

    }
    for (auto& material : materialesAudiovisuales){
        Elementos elemento;
        elemento.precio = material->getPrecio();
        elemento.titulo = material->getTitulo();
        if (material->getEsPelicula()){
            elemento.tipo = "Pelicula";
        }
        else{
            elemento.tipo =  "Podcast";
        }
        listaElemento.push_back(elemento);

    }


}

void MaterialPrecio::mostrarElementos(){
    cout << "-------Materiales-------" << endl;
    for(auto& elemento : listaElemento){
        cout << "Titulo: "<<elemento.titulo <<", Tipo: " << elemento.tipo << ", Precio: " << elemento.precio << endl;
    } 
    cout<<"---------------------------" << endl;
    
}

void MaterialPrecio::swap(Elementos& a, Elementos& b){
    Elementos temp = a;
    a= b;
    b= temp;
}

void MaterialPrecio::bubbleSort(){
    int n = listaElemento.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n -1; j++){
            if (listaElemento[j].precio > listaElemento[j+1].precio){
                swap(listaElemento[j], listaElemento[j+1]);
            }
        }
    }
    mostrarElementos();
}

void MaterialPrecio::bubbleSortDescendente(){
    int n = listaElemento.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n -1; j++){
            if (listaElemento[j].precio < listaElemento[j+1].precio){
                swap(listaElemento[j], listaElemento[j+1]);
            }
        }
    }
    mostrarElementos();
}