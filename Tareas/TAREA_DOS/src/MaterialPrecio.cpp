#include "MaterialPrecio.hpp"


void MaterialPrecio::cargarDatos(MaterialOrdenado* material){
    listaElemento.clear();
    materialesAudiovisuales = material->getMaterialesAudiovisuales();
    materialesLecturas = material->getMaterialesLecturas();
    cout <<"hola";
    for (auto& material : materialesLecturas){
        cout <<"hola" ;
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
        cout << elemento.tipo <<endl;
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


    mostrarElementos();

}

void MaterialPrecio::mostrarElementos(){
    cout << "-------Materiales-------" << endl;
    for(auto& elemento : listaElemento){
        cout << "Titulo: "<<elemento.titulo <<", Tipo: " << elemento.tipo << ", Precio: " << elemento.precio << endl;
    } 
    cout<<"---------------------------" << endl;
    
}