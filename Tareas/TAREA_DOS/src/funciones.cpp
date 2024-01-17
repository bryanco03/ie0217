/**
 * @file funciones.cpp
 * @author Bryan Cortés 
 * @brief Funciones para el operamiento del programa
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) MIT LICENSE 2024
 * 
 */



#include <memory>
#include "funciones.hpp"
#include "MaterialOrdenado.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "MaterialPrecio.hpp"

void menu(){

    cout << "---Bienvenido---"<< endl;
    cout << "---MENU---"<< endl;
    cout << "1. Agregar material."<< endl;
    cout << "2. Eliminar material"<< endl;
    cout << "3. Buscar articulo"<< endl;
    cout << "4. Lista de articulos"<< endl;
    cout << "5. Salir"<< endl;
}

void selecionarOpcion(MaterialOrdenado* material, MaterialPrecio* lista){

    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion){
    case 1:
        crearMateriales(material);    
        break;
    case 2:
        eliminarMateriales(material);
        break;  
    case 3:
        buscarMateriales(material);
        break;
    case 4:
        lista->cargarDatos(material);
        lista->mostrarElementos();
        break;
    case 5:
        cout << "Saliendo del programa...."<< endl;
        exit(0);
        break;

    default:
        break;
    }


}


void crearMateriales(MaterialOrdenado* material){
    int tipoMaterial;
    while(true){
        cout <<"1. Material Lectura"<< endl;
        cout <<"2. Material Audiovisual" <<endl;
        cout <<"3. Atras" << endl;
        cout <<"Ingrese la opcion deseada: ";
        cin >> tipoMaterial;
        if (tipoMaterial == 1){
            crearMaterialLectura(material);
            break;
        } 
        else if (tipoMaterial == 2){
            crearMaterialAudiovisual(material);
            break;
        }
        else if (tipoMaterial==3){
            break;
        }
        else{
            cout <<"Opcion ingresada incorrecta"<<endl;
        }
    }

}

void crearMaterialLectura(MaterialOrdenado* material){
    int tipoMaterialLectura;
    bool esLibro;
    while (true){
        cout <<"1. Libro"<< endl;
        cout <<"2. Noticia"<< endl;
        cout <<"3. Atras" << endl;
        cout << "Ingrese una opcion: ";
        cin >> tipoMaterialLectura;
        if (tipoMaterialLectura ==1){
            esLibro = true;
            break;
        }
        else if (tipoMaterialLectura ==2){
            esLibro = false;
            break;
        }
        else if(tipoMaterialLectura == 3){
            return ;
        }
        else {
            cout << "Opcion ingresada incorrecta"<< endl;
        }

    }
    string titulo, autor, editorial, genero, estado, infoAdicional;
    int numHojas, precio;

    cout <<"Ingrese el Titulo: ";
    cin >> titulo;
    cout <<"Ingrese el autor: ";
    cin >> autor;
    cout <<"Ingrese la editorial: ";
    cin >> editorial;
    cout <<"Ingrese el genero: ";
    cin >> genero;
    cout <<"Ingrese el estado (Disponible, Prestado, Reservado): ";
    cin >> estado;
    cout <<"Ingrese la cantidad de hojas: ";
    cin >> numHojas;
    cout <<"Ingrese el precio: ";
    cin >> precio;

    if (esLibro){
        cout << "Creando el  libro...." << endl;
    
        Libro* libroAgregar = new Libro(titulo, autor, editorial, genero, estado, numHojas, precio, esLibro); 
        material->agregarMaterialLectura(libroAgregar);
        cout << "Libro creado correctamente" << endl;
    }
    else{
        cout <<"Ingrese una informacion adicional: ";
        cin >> infoAdicional;
        cout << "Creando la Noticia...." << endl;
        Noticia* noticiaAgregar = new Noticia(titulo, autor, editorial, genero, estado, numHojas, precio, esLibro, infoAdicional);
        material->agregarMaterialLectura(noticiaAgregar);
        cout << "Noticia creada correctamente" << endl;
    }
}

void crearMaterialAudiovisual(MaterialOrdenado* material){
    int tipoMaterialAudiovisual;
    bool esPelicula;
    while (true){
        cout <<"1. Pelicula"<< endl;
        cout <<"2. Podcast"<< endl;
        cout <<"3. Atras" << endl;
        cout << "Ingrese una opcion";
        cin >> tipoMaterialAudiovisual;
        if (tipoMaterialAudiovisual ==1){
            esPelicula = true;
            break;
        }
        else if (tipoMaterialAudiovisual ==2){
            esPelicula = false;
            break;
        }
        else if(tipoMaterialAudiovisual == 3){
            return ;
        }
        else {
            cout << "Opcion ingresada incorrecta"<< endl;
        }

    }
    string titulo, autor, genero, estado, infoAdicional;
    int duracion, precio; 
    cout <<"Ingrese el Titulo: ";
    cin >> titulo;
    cout <<"Ingrese el autor: ";
    cin >> autor;
    cout <<"Ingrese el genero: ";
    cin >> genero;
    cout <<"Ingrese el estado (Disponible, Prestado, Reservado): ";
    cin >> estado;
    cout <<"Ingrese la duracion en minutos: ";
    cin >> duracion;
    cout <<"Ingrese el precio: ";
    cin >> precio;

    if (esPelicula){
        Pelicula* peliculaAgregar = new Pelicula(titulo, autor, genero, estado, duracion, precio, esPelicula); 
        cout << "Creando pelicula...." << endl;
        material->agregarMaterialAudiovisual(peliculaAgregar);
        cout << "Pelicula creada correctamente" << endl;

    }
    else{
        cout <<"Ingrese una informacion adicional: ";
        cin >> infoAdicional;
        cout << "Creando el Podcast...." << endl;
        Podcast* podcastAgregar = new Podcast(titulo, autor, genero, estado, duracion, precio, esPelicula, infoAdicional);
        material->agregarMaterialAudiovisual(podcastAgregar);
        cout << "Podcast creado correctamente" << endl;
    }
}

void buscarMateriales(MaterialOrdenado* material){
    int opcion;
    bool esLectura, tipoMaterial;
    int opcionTipo;
    string tituloBuscar;
    while(true){
        cout << "Busqueda por:"<< endl;
        cout << "1. Titulo. "<< endl;
        cout << "2. Tipo de material. "<< endl;
        cout << "3. Atras." << endl;
        cout << "Ingrese una opcion" << endl;
        cin >> opcion; 
        if (opcion==1){
            cout <<"Ingrese el titulo a buscar: ";
            cin >> tituloBuscar;
            cout<<"---MATERIALES ENCONTRADOS---"<<endl;
            material->buscarMaterialTitulo(tituloBuscar);
            return ;
        }
        else if (opcion == 2){
            cout << "--Tipos de materiales"<< endl;
            cout << "------------------" << endl;
            cout << "-Lectura"<< endl;
            cout << "1. Libro"<< endl;
            cout << "2. Noticia" << endl;
            cout << "-Audiovisual" << endl;
            cout << "3. Pelicula"<< endl;
            cout << "4. Podcast" << endl;
            cout << "------------------"<<endl;
            cout << "5. Atras"<< endl;
            cout <<"Ingrese una opcion: ";
            cin >> opcionTipo;

            cout<<"---MATERIALES ENCONTRADOS---"<<endl;
            if(opcionTipo ==1){
                esLectura= true;
                tipoMaterial = true;
                material->buscarMaterialTipos(esLectura, tipoMaterial);
            }
            else if (opcionTipo == 2){
                esLectura = true;
                tipoMaterial = false;
                material->buscarMaterialTipos(esLectura, tipoMaterial);

            }
            else if(opcionTipo ==3){
                esLectura = false;
                tipoMaterial = true;
                material->buscarMaterialTipos(esLectura, tipoMaterial);
            }

            else if(opcionTipo ==4){
                esLectura = false;
                tipoMaterial = false;
                material->buscarMaterialTipos(esLectura, tipoMaterial);
            }
            else if(opcionTipo ==5){
                break;
            }
            else{
                cout<<"Opcion desconocida"<<endl;
            }
        }
        else if (opcion == 3){
            break;
        }
        else{
            cout << "Opcion desconocida"<< endl;
        }
    }

}

void eliminarMateriales(MaterialOrdenado* material){
    int opcion;
    bool esLectura;
    string tituloEliminar;
    while(true){
        cout << "Grupo de Materiales"<<endl;
        cout << "1. Lectura"<<endl;
        cout << "2. Audiovisual"<<endl;
        cout << "3. Atras"<<endl;
        cout << "Ingrese el grupo del material a eliminar: "<<endl;
        cin >> opcion;
        if (opcion == 1){
            cout << "Ingrese el titulo del material a eliminar: ";
            cin >> tituloEliminar;
            esLectura= true;
            material->eliminarMaterial(esLectura, tituloEliminar);
        }
        else if (opcion == 2){
            cout << "Ingrese el titulo del material a eliminar: ";
            cin >> tituloEliminar;
            esLectura= false;
            material->eliminarMaterial(esLectura, tituloEliminar);
        }
        else if (opcion ==3){
            return;
        }
        else{
            cout << "Opcion desconocida"<< endl;
        }

    }
}

