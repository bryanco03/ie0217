#ifndef MATERIALPRECIO_H
#define MATERIALPRECIO_H

#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"

class MaterialPrecio: public Libro, public Noticia, public Pelicula, public  Podcast{

    public:
        MaterialPrecio();



};




#endif