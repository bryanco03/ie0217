#include <iostream>
using namespace std;

//funcion para imprimir numeros
void displayNum(int n1, float n2){
    cout << "El numero entero es: " << n1;
    cout << "El numero con decimales es " << n2;
}

int main(){
    int num1 = 5;
    float num2 = 5.5;

    // llamando la funcion 
    displayNum(num1, num2);

    return 0;
}