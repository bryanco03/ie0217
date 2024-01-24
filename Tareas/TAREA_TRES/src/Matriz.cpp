/**
 * @file Matriz.cpp
 * @author Bryan Cortés
 * @brief Implementacion de la clase Matriz
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include "Matriz.hpp"
#include "OperacionCompleja.hpp"
#include "OperacionBasica.hpp"
#include "ImprimirMatriz.hpp"
template<typename T>
void Matriz<T>::pedirDatos(){
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;               
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        throw invalid_argument("El numero de filas y columnas debe ser mayor que cero.");
    }
    datos.resize(filas, std::vector<T>(columnas));
    cout << "Ingrese los datos de la matriz:" <<endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> datos[i][j];
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("Se ingreso un tipo de dato invalido.");
                }
            }
        }
    
}

template<typename T>
void Matriz<T>::pedirDatosComplejos() {
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        throw invalid_argument("El numero de filas y columnas debe ser mayor que cero.");
    }
    datos.resize(filas, vector<complex<double>>(columnas));

    cout << "Ingrese los datos de la matriz (parte real y parte imaginaria separados por espacios):" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            double real, imag;
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> real >> imag;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("Se ingreso un tipo de dato invalido.");
            }
            datos[i][j] = complex<double>(real, imag);
        }
    }
}





template<typename T>
Matriz<T> Matriz<T>::operator+(const Matriz<T>& matriz2){
    OperacionesBasicas<T> sumar;
    return sumar.suma(*this, matriz2);
}
template<typename T>
Matriz<T> Matriz<T>::operator-(const Matriz<T>& matriz2){
    OperacionesBasicas<T> restar;
    return restar.resta(*this, matriz2);
}
template<typename T>
Matriz<T> Matriz<T>::operator*(const Matriz<T>& matriz2){
    OperacionesBasicas<T> multiplicar;
    return multiplicar.multiplicacion(*this, matriz2);
}


template<typename T>
void Matriz<T>::procesarOperacion(string tipoDato){
    if (tipoDato == "int"){
        Matriz<int> matriz1;
        Matriz<int> matriz2;

        ImprimirMatriz<Matriz<int>> mostrarResultado;
        try{
            string tipoOperacion;
            cout<<"Ingrese una matriz"<<endl;
            matriz1.pedirDatos();
            cout <<"Ingrese otra matriz"<<endl;
            matriz2.pedirDatos();
            cout << "Ingrese una operacion(+,-,*)";
            cin >> tipoOperacion;
            if (cin.fail()){
                throw invalid_argument("Se ingreso un tipo de dato invalido.");
            }
            if (tipoOperacion == "+"){
                Matriz<int> resultado = matriz1 + matriz2;
                mostrarResultado.mostrarMatriz(matriz1);
                cout << "   +   "<< endl;
                mostrarResultado.mostrarMatriz(matriz2);
                cout << "   =   "<< endl;
                mostrarResultado.mostrarMatriz(resultado);
            }
            else if(tipoOperacion == "-"){
                Matriz<int> resultado = matriz1 - matriz2;
                mostrarResultado.mostrarMatriz(matriz1);
                cout << "   -   "<< endl;
                mostrarResultado.mostrarMatriz(matriz2);
                cout << "   =   "<< endl;
                mostrarResultado.mostrarMatriz(resultado);
            }
            else if (tipoOperacion == "*"){
                Matriz<int> resultado = matriz1 * matriz2;
                mostrarResultado.mostrarMatriz(matriz1);
                cout << "   *   "<< endl<< endl;
                mostrarResultado.mostrarMatriz(matriz2);
                cout << "   =   "<< endl << endl;
                mostrarResultado.mostrarMatriz(resultado);
            }
        }
        catch(const std::exception& e){
            cerr << "Error con los datos ingresados. "<< e.what() << endl;
        }
    
    }
    else if (tipoDato == "float"){
        Matriz<float> matriz1;
        Matriz<float> matriz2;
        ImprimirMatriz<Matriz<float>> mostrarResultados;
        try{
            string tipoOperacion;
            cout<<"Ingrese una matriz"<<endl;
            matriz1.pedirDatos();
            cout <<"Ingrese otra matriz"<<endl;
            matriz2.pedirDatos();
            cout << "Ingrese una operacion(+,-,*)";
            cin >> tipoOperacion;
            if (cin.fail()){
                throw invalid_argument("Se ingreso un tipo de dato invalido.");
            }
            if (tipoOperacion == "+"){
                Matriz<float> resultado = matriz1 + matriz2;
                mostrarResultados.mostrarMatriz(matriz1);
                cout << "   +   "<< endl<< endl;
                mostrarResultados.mostrarMatriz(matriz2);
                cout << "   =   "<< endl<<endl;
                mostrarResultados.mostrarMatriz(resultado);
            }
            else if(tipoOperacion == "-"){
                Matriz<float> resultado = matriz1 - matriz2;
                mostrarResultados.mostrarMatriz(matriz1);
                cout << "   -   "<< endl<<endl;
                mostrarResultados.mostrarMatriz(matriz2);
                cout << "   =   "<< endl<<endl;;
                mostrarResultados.mostrarMatriz(resultado);

            }
            else if (tipoOperacion == "*"){
                Matriz<float> resultado = matriz1 * matriz2;
                mostrarResultados.mostrarMatriz(matriz1);
                cout << "   *   "<< endl<<endl;
                mostrarResultados.mostrarMatriz(matriz2);
                cout << "   =   "<< endl << endl;
                mostrarResultados.mostrarMatriz(resultado);
            }
        }
        catch(const std::exception& e){
            cerr << "Error con los datos ingresados. "<< e.what() << endl;
        }
    }
    else if(tipoDato == "complex"){ 
        Matriz<complex<double>> matriz1;
        Matriz<complex<double>> matriz2;
        ImprimirMatriz<Matriz<complex<double>>> mostrarResultado;
        try{
            string tipoOperacion;
            cout<<"Ingrese una matriz"<<endl;
            matriz1.pedirDatosComplejos();
            cout <<"Ingrese otra matriz"<<endl;
            matriz2.pedirDatosComplejos();
            cout << "Ingrese una operacion(+,-,*)";
            cin >> tipoOperacion;
            if (cin.fail()){
                throw invalid_argument("Se ingreso un tipo de dato invalido.");
            }
            if (tipoOperacion == "+"){

                Matriz<complex<double>> resultado = matriz1 + matriz2;
                mostrarResultado.mostrarMatrizCompleja(matriz1);
                cout << "   +   "<< endl<<endl;
                mostrarResultado.mostrarMatrizCompleja(matriz2);
                cout << "   =   "<< endl << endl;
                mostrarResultado.mostrarMatrizCompleja(resultado);
            }
            else if(tipoOperacion == "-"){
                Matriz<complex<double>> resultado = matriz1 - matriz2;
                mostrarResultado.mostrarMatrizCompleja(matriz1);
                cout << "   -   "<< endl<<endl;
                mostrarResultado.mostrarMatrizCompleja(matriz2);
                cout << "   =   "<< endl << endl;
                mostrarResultado.mostrarMatrizCompleja(resultado);
            }
            else if (tipoOperacion == "*"){
                Matriz<complex<double>> resultado = matriz1 * matriz2;
                mostrarResultado.mostrarMatrizCompleja(matriz1);
                cout << "   *   "<< endl<<endl;
                mostrarResultado.mostrarMatrizCompleja(matriz2);
                cout << "   =   "<< endl << endl;
                mostrarResultado.mostrarMatrizCompleja(resultado);
            }
        }
        catch(const std::exception& e){
            cerr << "Error con los datos ingresados. "<< e.what() << endl;
        }

    }
}






