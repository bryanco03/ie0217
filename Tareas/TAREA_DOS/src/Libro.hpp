#ifndef LIBRO_H
#define LIBRO_H

#include "MaterialLectura.hpp"

class Libro: public MaterialLectura{
    public:
        Libro(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro= true);
        void longuitudLibro();
        void mostrarInfo();
};

#endif