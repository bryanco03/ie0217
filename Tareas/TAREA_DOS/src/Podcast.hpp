/**
 * @file Podcast.hpp
 * @author Bryan Cortes
 * @brief Clase Podcast
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef PODCAST_H
#define PODCAST_H

#include "MaterialAudivisual.hpp"


/**
 * @brief Clase derivada de MaterialAudioVisual
 * 
 */

class Podcast : public MaterialAudiovisual{
    public : 
        /**
         * @brief Constructor de Podcast, inicializa los atributos con los parametros
         * 
         * @param titulo string parametro que inicializa el atributo de titulo
         * @param autor string parametro que inicializa el atributo de autor
         * @param editorial string parametro que inicializa el atributo de editorial
         * @param genero string parametro que inicializa el atributo de genero
         * @param estado string parametro que inicializa el atributo de estado
         * @param duracion  int parametro que inicializa el atributo de duracion
         * @param precio int parametro que inicializa el atributo de precio
         * @param esPelicula bool parametro que inicializa el atributo de esLibro, si es verdadero inidica que el material es pelicula, caso contrario es Podcast
         * @param infoAdicional string parametro que inicializa el atributo de infoAdicional
         */
        Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula, string infoAdicional);

    protected :
        void duracionPodcast();
        void mostrarInfo();
        string infoAdicional;

};


#endif