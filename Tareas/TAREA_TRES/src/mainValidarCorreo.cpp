#include "ValidarCorreo.hpp"

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