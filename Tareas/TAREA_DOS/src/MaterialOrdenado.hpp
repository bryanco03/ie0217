/**
 * @file MaterialOrdenado.hpp
 * @author Bryan Cortes
 * @brief Clase MaterialOrdenado
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef MATERIALORDENADO_H
#define MATERIALORDENADO_H


#include <algorithm> // Para std::find_if
#include <vector>
#include "MaterialAudivisual.hpp"
#include "MaterialLectura.hpp"
#include <memory>

/**
 * @brief Clase MaterialOrdenado para guardar objetos creados
 * 
 */


class MaterialOrdenado{
    public:
            /**
             * @brief  agregarMaterialAudiovisual() Método para agregar un objeyo creado con la clase MateriaAudioVisual al atributo materialesAudiovisuales.
             * 
             * @param material Puntero que apunta a un objeto de la clase MaterialAudiovisual
             */
        void agregarMaterialAudiovisual(MaterialAudiovisual* material);
            /**
             * @brief  agregarMaterialLectura() Método para agregar un objeyo creado con la clase MateriaLectura al atributo materialesLectura.
             * 
             * @param material Puntero que apunta a un objeto de la clase MaterialLectura
             */

        void agregarMaterialLectura(MaterialLectura* material);
        /**
         * @brief buscarMaterialtitulo() buscarMaterialtitulo() Busca en los vectores materialesAudiovisuales y materialesLectura  un objeto con el titulo igual al parametro dado
         * 
         * @param titulo string 
         */

        void buscarMaterialTitulo(string titulo);

        /**
         * @brief  buscarMaterialtitulo() Busca en los vectores materialesAudiovisuales o materialesLecturas los objetos con el tipo  dado por los parametros
         * 
         * @param esLectura bool indica si el material es audiovisual o lectura, si es true es lectura y si es false es audiovisual
         * @param tipo 
         */

        void buscarMaterialTipos(bool esLectura, bool tipo);


        /**
         * @brief eliminarMaterial() busca un elemento en los vectores materialesAudiovisuales y materialesLectura el cual cumpla los requisitos dados para 
         * 
         * @param esLectura bool indica si el material es audiovisual o lectura, si es true es lectura y si es false es audiovisual
         * @param titulo string
         */




        void eliminarMaterial(bool esLectura, string titulo);

        /**
         * @brief  getMaterialesAudiovisuales() metodo para obtener el  vector de punteros de objetos de la clase MaterialAudiovisual
         * 
         * @return vector<MaterialAudiovisual*> 
         */
        vector<MaterialAudiovisual*> getMaterialesAudiovisuales();


        /**
         * @brief getMaterialesLecturas() metodo para obtener el vector de punteros de objetos de la clase MaterialLectura
         * 
         * @return vector<MaterialLectura*> 
         */
        vector<MaterialLectura*> getMaterialesLecturas();

        /**
         * @brief Destructor de la clase, libera la memoria asignada durante la ejecucion
         * 
         */

        ~MaterialOrdenado();




    protected:

        /**
         * @brief Vectores de punteros
         * 
         */
        vector<MaterialAudiovisual*> materialesAudiovisuales;
        vector<MaterialLectura*> materialesLecturas;



};


#endif