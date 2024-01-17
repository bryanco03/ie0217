/**
 * @file MaterialAudivisual.hpp
 * @author Bryan Cortés 
 * @brief Clase MaterialAudiovisual
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef MATERIALAUDIOVISUAL_H
#define MATERIALAUDIOVISUAL_H

#include <string>
#include <iostream>
using namespace std;

/**
 * @brief  MaterialAudiovisual, clase base para las clases Pelicula y Podcast
 * 
 */

class MaterialAudiovisual {
    public:
        /**
         * @brief Constructor de la clase MaterialAudiovisual, inicializa los atributos de la clase
         *  
         * @param titulo string parametro que inicializa el atributo de titulo
         * @param autor string parametro que inicializa el atributo de autor
         * @param editorial string parametro que inicializa el atributo de editorial
         * @param genero string parametro que inicializa el atributo de genero
         * @param estado string parametro que inicializa el atributo de estado
         * @param numHojas  int parametro que inicializa el atributo de numHojas
         * @param precio int parametro que inicializa el atributo de precio
         * @param esLibro bool parametro que inicializa el atributo de esLibro, si es verdadero inidica que el material es libro, caso contrario es Noticia
         */
        MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula);

        /**
         * @brief getTitulo() método para obtener el atributo de titulo
         * 
         * @return string 
         */

        string getTitulo();
        /**
         * @brief getEsPelicula() método para obtener el atributo de esPelicula.
         * 
         * @return true si el objeto es pelicula
         * @return false si el objeto es podcast
         */
        bool getEsPelicula();


        /**
         * @brief getPrecio() método para obtener el atributo precio
         * 
         * @return int 
         */
        int getPrecio();

        /**
         * @brief mostrarInfo() método virtual en el cual se muestra la informacion del objeto
         * 
         */

        virtual void mostrarInfo();

        virtual ~MaterialAudiovisual(){}
    
    protected: 
    /**
     * @brief Atributos de la clase
     * 
     */
        string titulo;
        string autor;
        string genero;
        string estado;
        int duracion;
        int precio;
        bool esPelicula;

    private: 
        string grupo = "AudioVisual";
};






#endif