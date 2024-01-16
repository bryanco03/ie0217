#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> nums{1, 2, 3, 4, 5};

    // Se inicializa un iterator que apunta al comienzo de nums
    list<int>::iterator itr = nums.begin();

    cout << "Moviendose adelante"<< endl;
    
    while(itr != nums.end()){

        cout <<*itr <<", ";
        // moviendo el iterador a la siguiente posicion

        itr++; 
    }

    cout  <<endl << "Moviendose atras"<< endl;

    while(itr != nums.begin()){

        if(itr !=nums.end()){

        cout <<*itr <<", ";

        }
        // moviendo el iterador a una posicion atras.

        itr--; 
    }



    return 0;
}