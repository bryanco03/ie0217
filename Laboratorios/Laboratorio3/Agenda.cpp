#include "Agenda.hpp"

// agrega un contacto a la lista, se asegura que un contacto tenia el mismo telefono
template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it ++){
        if (it->getTelefono() == contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un conctacto con este numero");
        }
    }
    // agregar el contacto
    contactos.push_back(contacto);
}

// Busca un  contacto  por el telefono y  lo elimina
template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it ++){
        if (it->getTelefono() == telefono){
            contactos.erase(it);
            return;
        }
    }
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

// Muestra la lista de contactos

template <typename T>
void Agenda<T>::mostrarContacto() const{
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++){
        std::cout << "Nombre: "<< it->getNombre() 
        << " Telefono: "<< it->getTelefono()
        <<" Email: " << it->getEmail() <<  std::endl; 

    }
}

template <typename T>
// metodo que devuelve una lista con los conctactos los cuales encuentra un patron en el nombre y email
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const{

    // lista donde se van a guardar los resultados
    std:: list<Contacto<T>> resultados;
    // para guardar la posicion de un elementio
    std::string::size_type pos;
    // iterador para recorrer la lista
    typename std::list<Contacto<T>>::const_iterator it;
    // se recorre la lista de contactos 
    for (it = contactos.begin(); it != contactos.end();++it){
        // se busca si hay un patron en el nombre, si es asi se agrega  a resultados
        pos = it->getNombre().find(patron);
        if (pos  != std::string::npos){
            resultados.push_back(*it);
        } else{
            // se busca si hay un patron en el nombre, si es asi se agrega  a resultados
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos){
                resultados.push_back(*it);
            }
        }
    }
    // se retorna los resultados
    return resultados;
}

