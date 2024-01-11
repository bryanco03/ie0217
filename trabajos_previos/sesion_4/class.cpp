#include <iostream>
using namespace std;

class Molde{

    public:
        double largo;
        double ancho;
        double altura;

    Molde(){
        cout << "Esto se ejecuta en cada instaciacion"<< endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
        largo = 15;
        ancho = 12;
        altura = 21;
    }

    double calcularArea(){
        return largo * ancho;
    }

    double calcularVolumen(){
        return largo * ancho * altura;
    }
};


int main(){
    // Se instancia el objeto pared con la clase Molde
    Molde pared;

    // asignar valores
    pared.largo = 20.0;
    pared.ancho = 13.2;
    pared.altura = 23.4;

    // mostrar area y volumen del objeto
    cout <<"Area = " << pared.calcularArea()<<endl;
    cout <<"Volumen = " << pared.calcularVolumen()<<endl;


    return 0;

}