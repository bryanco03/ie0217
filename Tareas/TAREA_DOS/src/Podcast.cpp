#include "Podcast.hpp"


Podcast::Podcast(string titulo, string autor, string genero, string estado, int duracion, int precio, bool esPelicula, string infoAdicional):
MaterialAudiovisual(titulo, autor, genero, estado, duracion, precio, esPelicula){
    this->infoAdicional =  infoAdicional;
} 


void Podcast::duracionPodcast(){
    if (duracion <= 30){
        cout << "El Podcast es corto" << endl;
    }
    else if (duracion <= 90){
        cout << "El Podcast es mediano" << endl;
    }
    else {
        cout << "El Podcast es largo" << endl;
    }
}

void Podcast::mostrarInfo(){
    cout <<"---INFORMACION DEL PODCAST ---" <<endl;
    cout << "Titulo: " << titulo <<endl;
    cout << "Autor: " << autor <<endl;
    cout << "Genero: " << genero <<endl;
    cout << "Precio: " << precio << " Colones" << endl;
    cout << "Duracion: " << duracion << " minutos" <<endl;

}
