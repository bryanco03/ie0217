#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    float *ptr, *new_ptr; 
    ptr = (float *)malloc(5 * sizeof(float));

    if (!ptr){
        cout << "Memory Allocation Failed";
        exit(1);
    }

    //inicializando el bloque de memoria
    for (int i =0; i < 5;++i){
        ptr[i] = i * 1.5;
    }

    // reallocando la memoria

    new_ptr = (float*) realloc(ptr, 10 * sizeof(float));

    if (new_ptr ==NULL){
        cout << "Memory Re-allocation Failed";
        exit(1);
    }

    // inicializando la nueva memoria

        for (int i =0; i < 10;++i){
        ptr[i] = i * 2.5;
    }
    
    cout << "printing values" << endl;
    for (int i = 0; i < 10; ++i ){
        cout << new_ptr[i]<< endl;
    }

    free(new_ptr);
    
    return 0;

}