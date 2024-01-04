#include <iostream>
using namespace std;

// funcion para intercambiar valores

void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){

    // inicializacion de variables
    int a = 1, b =2;

    cout << "Antes del cambio" << endl;
    cout << "a = "<< a <<endl;
    cout << "b = "<< b <<endl;

    // Se llama la funcion pasandole las direcciones de las variables

    cout << "&a = "<< &a <<endl;
    cout << "&b = "<< &b <<endl;

    swap(&a,&b);

    cout << "\nDespues del cambio" << endl;
    cout << "a = "<< a <<endl;
    cout << "b = "<< b <<endl;

    return 0;
}

