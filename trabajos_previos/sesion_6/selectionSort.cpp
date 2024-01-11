#include <iostream>
using namespace std;


// Funcion para intercambiar la posicion de 2 elementos
void swap(int *a, int*b){
    int temp = *a;
    *a= *b;
    *b = temp;
}

// mostrar arreglo

void printArray(int array[], int size){
    for (int i = 0 ; i < size; i++){
        cout << " " << array[i];
    }
    cout << endl;
}

void selectionSort(int array[],int size){
    for (int step = 0; step < size -1 ; step++){
        int min_id =step;
        for (int i = step + 1; i < size; i++){
            // se seleciona el menor en cada iteracion
            if (array[i] < array[min_id]){
                min_id = i;
            }
            // poner el minimo a su posicion correcta
            swap(&array[min_id],&array[step]);
        }

    }

}
int main(){
    int data[] = {20,12,10,15,2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data,size);

    cout << "Arreglo ordenado de forma ascendente con selection Sort "<< endl;
    printArray(data,size);
    return 0;
}



