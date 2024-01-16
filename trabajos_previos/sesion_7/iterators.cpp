#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <string> languages={ "Python","C++","Java"};

    // crear un iterador para el vector de strings
    vector<string>::iterator itr;

    // se itera sobre todos los elementos

    for (itr = languages.begin(); itr != languages.end(); itr++ ){
        cout << *itr << ", ";
    }

    return 0;

}