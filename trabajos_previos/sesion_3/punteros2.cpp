
#include <iostream>
using namespace std;

int main(){

    int var = 5;
    int* pointVar;

    // Se guarda la direccion de var en pointVar
    pointVar = &var;

    // Se imprime el valor de var
    cout << "var  =  " << var << endl;
    //  Se imprime el valor que apunta  pointVar
    cout << "Valor que apunta PointVar :  " << *pointVar << endl;

    cout << "Cambiando el valor de var a 7" << endl;

    var = 7;

    // Se imprime el valor de var
    cout << "var  =  " << var << endl;
    //  Se imprime el valor que apunta  pointVar
    cout << " Valor que apunta PointVar :  " << *pointVar << endl;

    cout << "Cambiando el valor de *pointVar a 16" << endl;

    *pointVar = 16;

    // Se imprime el valor de var
    cout << "var  =  " << var << endl;
    //  Se imprime el valor que apunta  pointVar
    cout << " Valor que apunta PointVar :  " << *pointVar << endl;

    return 0;
}
