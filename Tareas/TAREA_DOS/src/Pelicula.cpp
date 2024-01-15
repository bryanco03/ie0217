#include "Pelicula.hpp"

Pelicula::Pelicula(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula):
MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio, true){} 

void Pelicula::duracionPelicula(){
        if (duracion <= 90){
        cout << "La pelicula es corta" << endl;
    }
    else if (duracion <= 150){
        cout << "La pelicula es mediana" << endl;
    }
    else {
        cout << "La pelicula es larga" << endl;
    }
}

void Pelicula::mostrarInfo(){
    cout <<"---INFORMACION DE LA PELICULA---" <<endl;
    cout << "Titulo: " << titulo <<endl;
    cout << "Autor: " << autor <<endl;
    cout << "Genero: " << genero <<endl;
    cout << "Precio: " << precio << " Colones" << endl;
    cout << "Duracion: " << duracion << " minutos" <<endl;

}
