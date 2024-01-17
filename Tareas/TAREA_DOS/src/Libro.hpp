/**
 * @file Libro.hpp
 * @author Bryan Cortés
 * @brief Contiene la clase libro
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */

#ifndef LIBRO_H
#define LIBRO_H

#include "MaterialLectura.hpp"


/**
 * @brief Libro clase derivada de MaterialLectura
 * 
 */

class Libro: public MaterialLectura{
    public:
    /**
     * @brief Constructor de Libro, inicializa los atributos con los parametros
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
        Libro(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro= true);
        
    /**
     * @brief muestra que tan largo o corto es el libro
     * 
     */
        void longuitudLibro();
    /**
     * @brief Muestra la informacion del libro
     * 
     */
        void mostrarInfo();
};

#endif