#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout << "Numero de argumentos: " << argc << endl;
    cout << "Nombre del programa: " << argv[0] << endl;


    // imprimir argumentos adicionales

    if (argc > 1){
        cout << "Argumentos adicionales: " << endl;
        for (int i; i < argc; ++i){
            cout << "argv["<< i <<"]: " << argv[i]<< endl;
        }
    }
    return 0;
}