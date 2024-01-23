/**
 * @file mainValidarCorreo.cpp
 * @author Bryan Cortés
 * @brief Funcion main del programa que valida direcciones de correos electronicos
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) MIT lICENSE 2024
 * 
 */
#include "ValidarCorreo.hpp"



/**
 * @brief main() se ejecuta el validador de correos electronicos 
 * 
 */
int main(){
    ValidarCorreo validador;


    std::cout <<"Bienvenido, este programa se dice si el correo electronico es valido." << std::endl;

    while(true){
        std::string correo;
        std::cout<<"Ingrese un correo electronico(Si deseas salir ingrese exit): ";
        std::cin >> correo;
        if (correo == "exit"){
            break;
        }
        if(validador.validar(correo)){
            std::cout<<"El correo es valido"<<std::endl;
        }
    }
    return 0;
}