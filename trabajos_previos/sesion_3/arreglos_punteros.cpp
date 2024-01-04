#include <iostream>
using namespace std;

int main(){
    float arr[3];

    // Se declara una variable tipo puntero
    float *ptr;
    cout <<"Mostrando las direcciones usando arreglos: "<< endl;

    // Se usa un for loop para imprimir las direcciones
    for (int i=0; i < 3; ++i){
        cout << "&arr[" << i << "]= " << &arr[i] << endl;
    }

    ptr = arr;

    cout <<"Mostrando las direcciones usando punteros: "<< endl;

        // Se usa un for loop para imprimir las direcciones
    for (int i=0; i < 3; ++i){
        cout << "ptr + "<< i << " = " << ptr + i << endl;
    }

}