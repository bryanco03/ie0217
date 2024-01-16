#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Se inicializa un  vector de enteros
    vector<int> numbers = {1,100,10,70,100};


    // imprime el vector
    cout << "Numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }

    return 0;
}