#ifndef MATERIALORDENADO_H
#define MATERIALORDENADO_H


#include <algorithm> // Para std::find_if
#include <vector>
#include "MaterialAudivisual.hpp"
#include "MaterialLectura.hpp"

class MaterialOrdenado{
    public:

        void agregarMaterialAudiovisual(MaterialAudiovisual* material);
        void agregarMaterialLectura(MaterialLectura* material);
        void mostrarInformacionMateriales();
        void buscarMaterialTitulo(string titulo);
        void buscarMaterialTipos(bool esLectura, bool tipo);
        void eliminarMaterial(bool esLectura, string titulo);


        ~MaterialOrdenado();


    private:
        vector<MaterialAudiovisual*> materialesAudiovisuales;
        vector<MaterialLectura*> materialesLecturas;



};


#endif