#include "MaterialOrdenado.hpp"


MaterialOrdenado::~MaterialOrdenado(){
    cout <<"La memoria ha sido liberada"<< endl;
    for (auto& material : materialesAudiovisuales) {
        delete material; // Liberar la memoria de cada material audiovisual
    }
    for (auto& material : materialesLecturas) {
        delete material; // Liberar la memoria de cada material lectura
    }
}

void MaterialOrdenado::agregarMaterialAudiovisual(MaterialAudiovisual* material){
    materialesAudiovisuales.push_back(material);

}

void MaterialOrdenado::agregarMaterialLectura(MaterialLectura* material){
    materialesLecturas.push_back(material);
}

void MaterialOrdenado::mostrarInformacionMateriales(){
    for (const auto& material : materialesAudiovisuales) {
        material->mostrarInfo(); // Llamar al método mostrarInformacion de cada material
        cout << endl;
    }
    for (const auto& material : materialesLecturas) {
        material->mostrarInfo(); // Llamar al método mostrarInformacion de cada material
        cout << endl;
    }
}

void MaterialOrdenado::buscarMaterialTitulo(string titulo){
    bool resultadoEncontrado = false;
    for (const auto& material : materialesAudiovisuales) {
        if (material->getTitulo() == titulo){
            material->mostrarInfo();
            cout << endl;
            resultadoEncontrado = true;
        }
    }
    for (const auto& material : materialesLecturas) {
        if (material->getTitulo() == titulo){
            material->mostrarInfo();
            cout << endl;
            resultadoEncontrado = true;
        }
    }
    if (!resultadoEncontrado){
        cout << "No se encontraron resultados."<< endl;
    }
}

void MaterialOrdenado::buscarMaterialTipos(bool esLectura, bool tipo){
    bool resultadoEncontrado = false;
    if (esLectura){
        for (const auto& material : materialesLecturas) {
            if (material->getEslibro() == tipo){
                material->mostrarInfo();
                cout << endl;
                resultadoEncontrado = true;
            }
        }
    }
    else if (!esLectura){
        for (const auto& material : materialesAudiovisuales) {
            if (material->getEsPelicula() == tipo){
                material->mostrarInfo();
                cout << endl;
                resultadoEncontrado = true;
            }
        }
    }
    if (!resultadoEncontrado){
        cout << "No se encontro con nigun resultado"<<endl;
    }
    

}

void MaterialOrdenado::eliminarMaterial(bool esLectura, string titulo){
    if (esLectura) {
        auto it = remove_if(materialesLecturas.begin(), materialesLecturas.end(), [&titulo](MaterialLectura* material) {
            if (material->getTitulo() == titulo) {
                delete material; // Liberar la memoria del material
                return true; // Indicar que se debe eliminar del vector
            }
            return false;
        });
        materialesLecturas.erase(it, materialesLecturas.end());
    } else {
        auto it = remove_if(materialesAudiovisuales.begin(), materialesAudiovisuales.end(), [&titulo](MaterialAudiovisual* material) {
            if (material->getTitulo() == titulo) {
                delete material; // Liberar la memoria del material
                return true; // Indicar que se debe eliminar del vector
            }
            return false;
        });
        materialesAudiovisuales.erase(it, materialesAudiovisuales.end());
    }
    cout << "Material eliminado" << endl;
}


vector<MaterialAudiovisual*> MaterialOrdenado::getMaterialesAudiovisuales(){
    return materialesAudiovisuales;
}

vector<MaterialLectura*> MaterialOrdenado::getMaterialesLecturas(){
    return materialesLecturas;
}