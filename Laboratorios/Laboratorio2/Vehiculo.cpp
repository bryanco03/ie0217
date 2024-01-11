#include "Vehiculo.hpp"

Vehiculo::Vehiculo(int param_velocidad){
    this->velocidad = param_velocidad;
}


void Vehiculo::acelerar(){
    cout << "Acelerando hasta "<< velocidad << "Km/h" << endl;
}

void Vehiculo::frenar(){
    cout << "Frenando el vehiculo"<< endl;
}

