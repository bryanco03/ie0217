/**
 * @file Pelicula.hpp
 * @author Bryan Cortés
 * @brief Clase Pelicula
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */

#ifndef PELICULA_H
#define PELICULA_H

#include "MaterialAudivisual.hpp"


/**
 * @brief Clase derivada de MaterialAudiovisual
 * 
 */

class Pelicula : public MaterialAudiovisual{
    public: 
        /**
         * @brief Constructor de Pelicula, inicializa los atributos con los parametros
         * 
         * @param titulo string parametro que inicializa el atributo de titulo
         * @param autor string parametro que inicializa el atributo de autor
         * @param editorial string parametro que inicializa el atributo de editorial
         * @param genero string parametro que inicializa el atributo de genero
         * @param estado string parametro que inicializa el atributo de estado
         * @param duracion  int parametro que inicializa el atributo de duraciom
         * @param precio int parametro que inicializa el atributo de precio
         * @param esPelicula bool parametro que inicializa el atributo de esLibro, si es verdadero inidica que el material es pelicula, caso contrario es Podcast
         */
        Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula);
        
        /**
         * @brief Muestra si la pelicula es larga o corta
         * 
         */
        void duracionPelicula();

        /**
         * @brief Muestra la informacion de la pelicula
         * 
         */

        void mostrarInfo();
};



#endif