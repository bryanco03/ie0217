#ifndef MATERIALLECTURA_H
#define MATERIALLECTURA_H

#include <iostream>
#include <string>
using namespace std;

class MaterialLectura{
    public:
        MaterialLectura(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro);
        virtual void mostrarInfo();
        string getTitulo();
        bool getEslibro();
        int getPrecio();

    protected:
        string titulo;
        string autor;
        string editorial;
        string genero;
        string estado;
        int numHojas;
        int precio;
        bool esLibro;

    private:    
        string grupo = "Lectura";


};





#endif