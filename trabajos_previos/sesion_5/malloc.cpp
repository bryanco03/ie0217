#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    // asignar un bloque de memoria en el heap
    int* ptr =(int*)malloc(sizeof(int));

    // asigar un valor a la memoria reservada
    *ptr = 5;

    cout << *ptr;
    
    return 0;

}