#ifndef MATERIALORDENADO_H
#define MATERIALORDENADO_H


#include <vector>
#include "MaterialAudivisual.hpp"
#include "MaterialLectura.hpp"

class MaterialOrdenado{
    public:

        void agregarMaterialAudiovisual();
        void agregarMaterialLectura();

        

        ~MaterialOrdenado();


    private:
        vector<MaterialAudiovisual*> materialesAudiovisuales;
        vector<MaterialLectura*> materialesLecturas;



};


#endif