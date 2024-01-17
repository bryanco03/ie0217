/**
 * @file Noticia.hpp
 * @author Bryan Cortés
 * @brief Clase Noticia
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */



#ifndef NOTICIA_H
#define NOTICIA_H

#include "MaterialLectura.hpp"

/**
 * @brief Clase derivada de MaterialLectura
 * 
 */


class Noticia : public MaterialLectura{
    public:
    /**
     * @brief Constructor de Noticia, inicializa los atributos con los parametros
     * 
     * @param titulo string parametro que inicializa el atributo de titulo
     * @param autor string parametro que inicializa el atributo de autor
     * @param editorial string parametro que inicializa el atributo de editorial
     * @param genero string parametro que inicializa el atributo de genero
     * @param estado string parametro que inicializa el atributo de estado
     * @param numHojas  int parametro que inicializa el atributo de numHojas
     * @param precio int parametro que inicializa el atributo de precio
     * @param esLibro bool parametro que inicializa el atributo de esLibro, si es verdadero inidica que el material es libro, caso contrario es Noticia
     * @param infoAdicional string parametro que inicializa el atributo de infoAdicional
     */ 
        Noticia(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro, string infoAdicional);
        
        /**
         * @brief atributo adicional de la clase
         * 
         */
        
        string InfoAdicional;
    /**
     * @brief muestra que tan largo o corto es la noticia
     * 
    */
        void longuitudNoticia();

    /**
     * @brief Muestra la informacion de la noticia
     * 
     */
    
        void mostrarInfo();
};



#endif