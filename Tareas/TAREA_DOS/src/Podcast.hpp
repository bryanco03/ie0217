#ifndef PODCAST_H
#define PODCAST_H

#include "MaterialAudivisual.hpp"

class Podcast : public MaterialAudiovisual{
    public : 
        Podcast(string titulo, string autor, string editorial, string genero, string estado, int duracion, int precio, bool esPelicula, string infoAdicional);

    protected :
        void duracionPodcast();
        void mostrarInformacion();
        string infoAdicional;

};


#endif