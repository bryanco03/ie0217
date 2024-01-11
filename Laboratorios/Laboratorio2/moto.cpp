#include "moto.hpp"

Moto::Moto(int velocidad, bool tieneCasco) : Vehiculo(velocidad), tieneCasco(tieneCasco) {}

void Moto::usarCasco(){
    if(tieneCasco){
        cout << "Usando casco"<<endl;
    }
    else{
        cout << "Alerta !! no tiene casco"<< endl;
    }
}