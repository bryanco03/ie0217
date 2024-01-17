/**
 * @file MaterialPrecio.hpp
 * @author Bryan Cortés
 * @brief Clase MaterialPrecio
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */



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
    /**
     * @brief Struct de los datos necesarios para crear la lista
     * 
     */
        struct Elementos{
            string titulo;
            string tipo;
            int precio;
        };

    /**
     * @brief cargarDatos() Carga los datos de los vectores de punteros de la clase MaterialOrdenado, mete los datos en el struct y se agregar a listaElementos
     * 
     * @param material Puntero de MaterialOrdenado
     */
        void cargarDatos(MaterialOrdenado* material);
        
        
        /**
         * @brief mostrarElementos() muestra la lista
         * 
         */
        
        void mostrarElementos();


        
        /**
         * @brief vector de struct con la informacion necesaria
         * 
         */
        vector<Elementos> listaElemento;

};  

#endif