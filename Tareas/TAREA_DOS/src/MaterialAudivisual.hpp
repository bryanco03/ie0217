#ifndef MATERIALAUDIOVISUAL_H
#define MATERIALAUDIOVISUAL_H

#include <string>
#include <iostream>
using namespace std;

class MaterialAudiovisual {
    public:
        MaterialAudiovisual(string titulo, string autor, string editorial, string genero, string estado, int duracion, int precio, bool esPelicula);
    
    protected: 
        string titulo;
        string autor;
        string editorial;
        string genero;
        string estado;
        int duracion;
        int precio;
        bool esPelicula;

    private: 
        string grupo = "AudioVisual";
};






#endif