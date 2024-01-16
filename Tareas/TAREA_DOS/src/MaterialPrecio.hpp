#ifndef MATERIALPRECIO_H
#define MATERIALPRECIO_H
#include <vector>
#include "MaterialOrdenado.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"



class MaterialPrecio: public MaterialOrdenado {

    public:
        struct Elementos{
            string titulo;
            string tipo;
            int precio;
        };

        void cargarDatos(MaterialOrdenado* material);
        void mostrarElementos();
        vector<Elementos> listaElemento;

};  

#endif