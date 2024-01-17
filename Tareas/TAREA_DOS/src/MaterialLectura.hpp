/**
 * @file MaterialLectura.hpp
 * @author Bryan Cortes
 * @brief clase MaterialLectura
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef MATERIALLECTURA_H
#define MATERIALLECTURA_H

#include <iostream>
#include <string>
using namespace std;


/**
 * @brief MaterialLectura Clase base para las clases Libro y Noticia
 * 
 */

class MaterialLectura{
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

        MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro);

        /**
         * @brief mostrarInfo() método virtual en el cual se muestra la informacion del objeto
         * 
         */

        virtual void mostrarInfo();
        /**
         * @brief getTitulo() método para obtener el atributo de titulo
         * 
         * @return string 
         */

        string getTitulo();

        /**
         * @brief getEsPelicula() método para obtener el atributo de esLibro.
         * 
         * @return true si el objeto es libro
         * @return false si el objeto es noticia
         */

        bool getEslibro();
        
        /**
         * @brief getPrecio() método para obtener el atributo precio
         * 
         * @return int 
         */


        int getPrecio();

        /**
         * @brief Destructor virtual de MaterialLectura
         * 
         */

        virtual ~MaterialLectura(){}

    protected:
        /**
         * @brief Atributos de la clase
         * 
         */
        string titulo;
        string autor;
        string editorial;
        string genero;
        string estado;
        int numHojas;
        int precio;
        bool esLibro;

    private:    
        string grupo = "Lectura";


};





#endif