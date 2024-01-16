#include <iostream>
#include <stack>
using namespace std;

int main(){

    // se crea un stack de enteros
    stack<int> numbers;


    // se ponen datos en el stack
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout <<"Los numeros son: ";

    // se tiene acceso a los datos sacandolos uno por uno, el ultimo de entrar es el primero de salir

    while(!numbers.empty()){

        // se imprime el elemento del top
        cout << numbers.top() << ", ";


        // se elimina el elemento que esta en el top
        numbers.pop();
    }

}