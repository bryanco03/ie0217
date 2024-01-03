#include <iostream>
using namespace std;

int main() {
    // se declara tres variables de tipo entero locales, las cuales solo existen en la funcion main, afuera de esta no se pueden utilizar.
    int a, b;
    int c;
    // Se inicializan las variales poniendoles valores a cada una.
    a =  10;
    b = 20;
    c = a +  b;

    cout << c;
        
    return 0;

}