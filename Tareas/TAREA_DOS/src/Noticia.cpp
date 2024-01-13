#include "Noticia.hpp"


Noticia::Noticia(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro, string infoAdicional):
MaterialLectura(titulo, autor, editorial, genero, estado, numHojas, precio, false){
    this->InfoAdicional = infoAdicional;
}
void Noticia::longuitudNoticia(){
    if (numHojas <= 5){
        cout << "El libro es corto" << endl;
    }
    else if (numHojas <= 10){
        cout << "El libro es  mediano" << endl;
    }
    else {
        cout << "El libro es largo" << endl;
    }
}
void Noticia::mostrarInfo(){
    cout <<"---INFORMACION DE LA NOTICIA---" <<endl;
    cout << "Titulo: " << titulo <<endl;
    cout << "Autor: " << autor <<endl;
    cout << "Editorial: " << editorial <<endl;
    cout << "Genero: " << genero <<endl;
    cout << "Precio: " << precio << " Colones" << endl;
    cout << "Cantidad de hojas: " << numHojas <<endl;
    cout << "Informacion adicional: " << InfoAdicional << endl;
}

