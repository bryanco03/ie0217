#include <iostream>
using namespace std;

class Molde{

    public:
        double largo;
        double ancho;
        double altura;
    // otra sintaxis para el construtor
        Molde(double largo_p, double ancho_p, double altura_p) : largo(largo_p), ancho(ancho_p), altura(altura_p) {}

        ~Molde(){
            cout <<"Saludos desde el destructor";
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
    Molde pared(10.0,20.0,35.0);

    // asignar valores
    pared.largo = 20.0;
    pared.ancho = 13.2;
    pared.altura = 23.4;

    // mostrar area y volumen del objeto
    cout <<"Area = " << pared.calcularArea()<<endl;
    cout <<"Volumen = " << pared.calcularVolumen()<<endl;


    return 0;

}