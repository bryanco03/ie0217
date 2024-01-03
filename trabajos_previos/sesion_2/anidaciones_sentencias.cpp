#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout << "Ingrese un numero entero: ";
    cin >> num;

    // condicion if de afuera 
    if (num != 0){
        // condicion if de adentro (anidada)
        if (num > 0) {
            cout << "El numero es positivo" << endl;
        }
        else {
            cout << "El numero es negativo" << endl;
        }
    }
    else {
        cout << "El Numero es 0 el cual no es ni negativo ni positivo ";
    }
    return 0;
}