#include <iostream>
using namespace std;

// prototipo de la funcion antes del main
int add(int a, int b);

int main(){
    int sum;
    // Se llama la funcion y el valor retornado de esta se guarda en sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0; 
}

// Se declara la funcion despues del main
int add(int a, int b){
    return (a + b);
}