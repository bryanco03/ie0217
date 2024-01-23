/**
 * @file ValidarCorreo.hpp
 * @author Bryan Cortés 
 * @brief Declaracion de la clase ValidarCorreo
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#ifndef VALIDARCORREO_HPP
#define VALIDARCORREO_HPP

#include<iostream>
#include<regex>
#include<stdexcept>
#include <string>

/**
 * @brief Clase ValidarCorreom, indica si una direcion de correo electronico es validas segun algunas restriciones dadas
 * 
 */
class ValidarCorreo{
    public:
    /**
     * @brief verifica si el correo electronico cumple con la estructura nombre@domino.extension, despues las separa en nombre, dominio y extension y se verifican si cumples con las condiciones dadas.
     * 
     * @param string correo direcion de correo electronico a analizar 
     */
    bool validar(std::string correo);




};



#endif 