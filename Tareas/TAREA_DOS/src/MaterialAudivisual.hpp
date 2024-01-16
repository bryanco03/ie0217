#ifndef MATERIALAUDIOVISUAL_H
#define MATERIALAUDIOVISUAL_H

#include <string>
#include <iostream>
using namespace std;

class MaterialAudiovisual {
    public:
        MaterialAudiovisual(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula);
        string getTitulo();
        bool getEsPelicula();
        int getPrecio();

        virtual void mostrarInfo();
    
    protected: 
        string titulo;
        string autor;
        string genero;
        string estado;
        int duracion;
        int precio;
        bool esPelicula;

    private: 
        string grupo = "AudioVisual";
};






#endif