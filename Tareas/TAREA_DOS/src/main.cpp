#include "funciones.hpp"
#include "MaterialPrecio.hpp"

int main(){
    MaterialOrdenado biblioteca;
    MaterialPrecio lista;
    while (true){
        menu();
        selecionarOpcion(&biblioteca, &lista);

    }
    return 0;
}