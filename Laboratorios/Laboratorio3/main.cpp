#include "Agenda.hpp"
#include <iostream>

int main(){

    // objetos de la clase template
    Contacto<std::string> contacto1("Juanito Mora", "27681234", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("Willian Walker", "86548877", "willywalk@outlook.es");
    Contacto<std::string> contacto3("Juan Santamaria", "22315689", "adiosmezon@gmail.com");


    // crear agenda
    Agenda<std::string> agenda;

    // Lista de resultados 
    std::list<Contacto<std::string>> resultados;

    try{
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);
    }catch(const std::exception& e){
        std::cerr << "Error al agregar el contacto "<< e.what() << std::endl;
    }

    std::cout <<"Contactos en la agenda" << std::endl;
    agenda.mostrarContacto();



    // eliminar contacto
    try{
        agenda.eliminarContacto("86548877");

    }catch(const std::exception& e){

        std::cerr << "Error al elimar el contacto "<< e.what() << std::endl;
    }
    std::cout <<"Contactos en la agenda" << std::endl;
    agenda.mostrarContacto();
    // buscar contactos con el patron Mora
    resultados = agenda.buscarContactos("Mora");

    // mostrar resultados

    std::cout<< "Mostrando contactos con 'Mora'  "  << std::endl;
    for (const auto& contacto : resultados) {
        std::cout << "Nombre: " << contacto.getNombre()<< " Telefono: "<<contacto.getTelefono() << " Email: " << contacto.getEmail() << std::endl;
    }

}