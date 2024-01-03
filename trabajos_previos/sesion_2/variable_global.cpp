#include <iostream>
using namespace std;


// se declara una varible de tipo entero global, la cual se puede utilizar en cualquier parte del codigo.
int g;


int main() {
    // se declara dos variables de tipo entero locales, las cuales solo existen en la funcion main, afuera de esta no se pueden utilizar.
    int a, b;
    
    // Se inicializan las variales poniendoles valores a cada una.
    a =  10;
    b = 20;
    g = a +  b;

    cout << g;
        
    return 0;

}