#include <iostream>
using namespace std;

// Bubble sort

void bubbleSort(int array[], int size){

    // for loop para acceder cada elemento del arreglo
    for (int step = 0; step < size; ++step){
        // for loop para comparar elementos del arreglo
        for (int i = 0; i < size - step -1; ++i){

            // comparar dos elementos adyacentes
            // ir cambiando posicion en orden descendente
            if (array[i] > array[i + 1]){
                // intercambiar elementos si no estan en el orden correcto
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] =temp; 
            }

        }
    }
}

// mostrar arreglo

void printArray(int array[], int size){
    for (int i = 0 ; i < size; i++){
        cout << " " << array[i];
    }
    cout << endl;
}

int main(){
    int data[] = {-2, 45, 0, 11, -9};

    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);
    cout << "Arreglo ordenado de forma ascendente con Bubble Sort "<< endl;
    printArray(data,size);
    return 0;
} 