#include <iostream>
#include <set>

using namespace std;

int main(){

    // Se inicializa un  set de enteros
    set<int> numbers = {1,100,10,70,100};


    // imprime el vector
    cout << "Numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    
    return 0;
}