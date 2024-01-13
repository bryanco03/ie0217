#ifndef NOTICIA_H
#define NOTICIA_H

#include "MaterialLectura.hpp"

class Noticia : public MaterialLectura{
    public:
        Noticia(string titulo, string autor, string editorial, string genero, string estado, int numHojas, int precio, bool esLibro, string infoAdicional);
        string InfoAdicional;
        void longuitudNoticia();
        void mostrarInfo();
};



#endif