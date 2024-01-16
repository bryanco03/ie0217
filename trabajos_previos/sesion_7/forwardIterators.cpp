#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int> nums{1, 2, 3, 4};

    // Se inicializa un iterator que apunta al comienzo de la forward list

    forward_list<int>::iterator itr = nums.begin();

    while(itr != nums.end()){

        // accediendo a al valor usando un operador unidirecional
        int original_value = *itr;

        // asignando un nuevo valor usando el operador unidirecional
        *itr = original_value *2;

        // moviendo el iterador a la siguiente posicion

        itr++; 
    }
    for (int num: nums){
        cout << num <<", ";

    }
    return 0;
}