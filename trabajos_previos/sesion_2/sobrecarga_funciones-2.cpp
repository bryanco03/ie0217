#include <iostream>
using namespace std;


// funcion con 2 parametros, uno de tipo entero y el otro de tipo double
void display(int var1, double var2){
    cout << "Numero entero: " << var1;
    cout << " y el numero con decimales: " << var2 << endl; 
}

// funcion con un argumento de tipo double
void display(double var1){
    cout << "numero con decimales: " << var1 << endl; 
}
// funcion con un argumento de tipo entero
void display(int var1){
    cout << "Numero entero: " << var1 << endl; 
}

int main(){

    int a = 5;
    double b = 5.5;
    
    // Se llama la funcion con argumento de tipo entero
    display(a);

    // Se llama la funcion con argumento de tipo double

    display(b);

    // Se llama la funcion con dos argumentos

    display(a,b);

    return 0;

}
