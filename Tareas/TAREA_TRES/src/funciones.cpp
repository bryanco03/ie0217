#include "funciones.hpp"
#include "Matriz.hpp"
#include "ImprimirMatriz.hpp"
void menu(){
        cout << "---Calculadora de matrices---" << endl;
        cout <<"Esta Calculadora permite trabajar con los siguientes tipos de numero"<<endl;
        cout << "1. Numeros Enteros"<< endl;
        cout << "2. Numeros Reales" << endl;
        cout << "3. Numeros complejos"<< endl;
        cout << "4. Salir"<< endl;

}

void procesarOpcion(){
    int opcion;

    try{
            cout  <<"Ingrese el con cual desear trabajar: ";
            cin >> opcion;
            if (cin.fail()){
                throw  invalid_argument("Se ingreso un tipo de dato invalido.");
            }
        } 
        catch (const std::exception& e){
            cerr << "Error al ingresar la opcion. "<< e.what() << endl;
        }

    if (opcion ==1){
        Matriz<int> matriz;
        matriz.procesarOperacion("int");
    }
    else if(opcion==2){
        Matriz<float> matriz;
        matriz.procesarOperacion("float");
    }
    else if(opcion==3){
        Matriz<complex<double>> matriz;
        matriz.procesarOperacion("complex");
    }
    else if (opcion ==4){
        exit(0);
    }
}
