#include "funciones.hpp"
#include "MaterialOrdenado.hpp"

void menu(){

    cout << "---Bienvenido---"<< endl;
    cout << "---MENU---"<< endl;
    cout << "1. Agregar articulo."<< endl;
    cout << "2. Eliminar articulo"<< endl;
    cout << "3. Buscar articulo"<< endl;
    cout << "4. Lista de articulos"<< endl;
    cout << "5. Salir"<< endl;

}

void selecionarOpcion(){
    int opcion;
    cout << "Ingrese una opcion" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    
        break;
    case 2:
        break;  
    case 3:
        break;
    case 4:
        break;
    case 5:
        cout << "Saliendo del programa...."<< endl;
        exit(0);
        break;

    default:
        break;
    }


}

