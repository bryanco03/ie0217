
#include <iostream>
using namespace std;

int main(){

    int var = 5;

    // Se declara una variable tipo puntero
    int* pointVar;

    // Se guarda la direccion de var en pointVar
    pointVar = &var;

    // Se imprime el valor de var
    cout << "var  =  " << var << endl;

    // Se imprime la direcion  de var
    cout << "direccion de var (&var)  =  " << &var << endl;

    // Se imprime el valor de  pointVar
    cout << "PointVar =  " << pointVar << endl;

    //  Se imprime el valor que apunta  pointVar
    cout << " Valor que apunta PointVar :  " << *pointVar << endl;


    return 0;

}
