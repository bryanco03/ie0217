/**
 * @file funciones.hpp
 * @author Bryan Cortés 
 * @brief Declaraciones de funciones para el funcionamiento del programa.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */


#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"
#include <iostream>
using namespace std;


/**
 * @brief Menu() muestra las opciones que brinda el programa, como agregar material, eliminar, buscarlo por titulo o tipo y una lista de materiales 
 * 
 */
void menu();



/**
 * @brief selecionarOpcion() Procesa la opcion ingresada por el usuario y ejecuta la accion que se desea ejecutar.
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 * @param lista Puntero de un objeto creado a partir de la clase MaterialPrecio.
 *  */

void selecionarOpcion(MaterialOrdenado* material, MaterialPrecio* lista );


/**
 * @brief crearMateriales() Crea un objeto de la clase Libro, Noticia, Pelicula o Podcast y su puntero es añadido al vector de puntero que es atributo del parametro material
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 */
void crearMateriales(MaterialOrdenado* material);

/**
 * @brief crearMaterialesLectura() funciona en cojunto con crearMateriales(), pregunta por el usuario la informacion requerida para crear objetos de las clases Libro y noticia, los crea
 * utilizando memoria dinamica y los agrega l vector de puntero que es atributo del parametro material.
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 */


void crearMaterialLectura(MaterialOrdenado* material);

/**
 * @brief  crearMaterialesAudiovisual() funciona en cojunto con crearMateriales(), pregunta por el usuario la informacion requerida para crear objetos de las clases L y noticia
 *  los crea utilizando memoria dinamica y los agrega l vector de puntero que es atributo del parametro material..
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 */

void crearMaterialAudiovisual(MaterialOrdenado* material);

/**
 * @brief buscarMateriales() Busca materiales dentro del vector de punteros del atributo material, cuenta con busqueda por tipo de material y por titulo, la busqueda la hace llamando  los metodos 
 *  buscarMaterialTitulo() y buscarMaterialTipo() de material
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 */
void buscarMateriales(MaterialOrdenado* material);


/**
 * @brief eliminarMateriales() pregunta al usuario por el tipo y titulo del material a eliminar y llama el metodo eliminarMaterial() del parametro material 
 * 
 * @param material Puntero de un objeto creado a partir de la clase MaterialOrden.
 */

void eliminarMateriales(MaterialOrdenado* material);


#endif