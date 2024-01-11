#include <iostream>

/* Se almacena en el segmento de data. */
int globalVariable = 42;

int main(){
    /* Se almacena en el stack*/
    int stackVariable = 10;

    int* heapVariable = new int(20);
    std::cout << "Valor de globalVariable: " << globalVariable << std::endl;
    std::cout << "Valor de stackVariable: " << stackVariable << std::endl;    
    std::cout << "Valor de heapVariable: " << heapVariable << std::endl;

    // liberar memoria

    delete heapVariable;

    return 0;
}