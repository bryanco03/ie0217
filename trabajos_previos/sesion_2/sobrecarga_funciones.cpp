#include <iostream>
using namespace std;

// Funcion con argumento de tipo flotante

float absolute(float var) {
    if (var < 0.0 ){
        var = -var;
    }
    return var;
}

// funcion con argumento de tipo entero

int absolute(int var){
    if (var < 0){
        var = -var;
    }
    return var;
}

int main(){
    //  se llama la funcion con argumento tipo entero
    cout << "El valor absoluto de -5 es " << absolute(-5);

    // Se llama la funcion con argumento de tipo flotante
    cout << "El valor absoluto de 5.5 es  " << absolute(5.5f);

    return 0;
}