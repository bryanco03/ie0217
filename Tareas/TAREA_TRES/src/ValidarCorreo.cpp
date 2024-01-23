#include "ValidarCorreo.hpp"

bool ValidarCorreo::validar(std::string correo){
    try {
        if (correo.empty()) {
            throw std::invalid_argument("La direccion de correo electronico no puede estar vacia.");
        }
        std::regex regexCorreo(R"([a-zA-Z0-9.-]+@[a-zA-Z]+\.[a-zA-Z]{2,4})");
        if (!std::regex_match(correo, regexCorreo)) {
            throw std::invalid_argument("La direccion de correo electronico no tiene un formato valido.");
        }
        size_t posArroba = correo.find('@');
        std::string nombre = correo.substr(0, posArroba);
        std::string dominioExtension = correo.substr(posArroba + 1);
        std::regex  regexNombre("^(?!.*[-_.]{2})[a-zA-Z0-9](?:[-_.a-zA-Z0-9]{0,14}[a-zA-Z0-9])?$");

        if (!std::regex_match(nombre, regexNombre)){
            throw std::invalid_argument("El nombre de usuario en la direccion de correo electronico no es valido.");
        }

        size_t dotPosition = dominioExtension.find_last_of('.');
        std::string dominio = dominioExtension.substr(0, dotPosition + 1);
        std::string extension = dominioExtension.substr(dotPosition + 1);
        std::regex regexDominio("^[a-zA-Z]+\\.$");
        std::regex regexExtension("^[a-zA-Z]{2,4}$");
        if (!std::regex_match(dominio,regexDominio)){
            throw std::invalid_argument("El dominio en la direccion de correo electronico no es valido.");
        }
        if (!std::regex_match(extension,regexExtension)){
            throw std::invalid_argument("La extension en la direccion de correo electronico no es valido.");
        }

        return true; // La dirección de correo electrónico es válida.
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return false; // La dirección de correo electrónico no es válida.
        }
}
