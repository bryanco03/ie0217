#ifndef PELICULA_H
#define PELICULA_H

#include "MaterialAudivisual.hpp"

class Pelicula : public MaterialAudiovisual{
    public: 
        Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula);
        void duracionPelicula();
        void mostrarInfo();
};



#endif