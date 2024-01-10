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

// Parte  el arreglo en dos, 
int partition(int arr[], int low, int high, int pivot){
	int p_id = low;
    
	// se recorre el arreglo
    for(int i=low;i<=high;i++) {   
        
        // si el elemento es menor que al pivote
        if(arr[i]<=pivot) {
            // se intercambian posiciones.
            swap(arr[p_id],arr[i]);
            p_id++;
        }
    }
    
    p_id--;
    
	return p_id;
}

//  Se divide el arreglo en 2 y se llamam recursivamente
void quickSort(int arr[], int low, int high){
	if(low < high) {
	    int pivot = arr[high];
        
	    int p_id = partition(arr, low, high, pivot);
	
            quickSort(arr, low, p_id-1);
            quickSort(arr, p_id+1, high);
	}
}

int main(){
    int data[] = {9,5,1,4,3};
    int size = sizeof(data) / sizeof(data[0]);
    quickSort(data,0, size -1);

    cout << "Arreglo ordenado de forma ascendente con quickSort "<< endl;
    printArray(data,size);
    return 0;
}



