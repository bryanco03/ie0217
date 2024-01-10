#include <iostream>
using namespace std;

int main(){

    // Declarar  un puntero entero

    int* pointInt;

    // Declarar un puntero flotante

    float* pointFloat;

    // Se reserva la memoria dinamica
    pointInt = new int;
    pointFloat = new float;


    // Se asigna un valor a la memoria guardada

    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;
    
    return 0;
}