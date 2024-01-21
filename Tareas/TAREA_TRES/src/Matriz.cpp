#include "Matriz.hpp"
#include "OperacionBasica.hpp"

template<typename T>
void Matriz<T>::pedirDatos(bool esComplejo){
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;               
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas <= 0 || columnas <= 0) {
        throw invalid_argument("El numero de filas y columnas debe ser mayor que cero.");
    }
    datos.resize(filas, std::vector<T>(columnas));
    if (esComplejo){

    }
    else{
        cout << "Ingrese los datos de la matriz:" <<endl;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> datos[i][j];
                if (cin.fail()) {
                    throw invalid_argument("Se ingreso un tipo de dato invalido.");
                }
            }
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
                resultado.mostrarMatriz();
            }
            else if(tipoOperacion == "-"){
                Matriz<int> resultado = matriz1 - matriz2;
                resultado.mostrarMatriz();
            }
            else if (tipoOperacion == "*"){
                Matriz<int> resultado = matriz1 * matriz2;
                resultado.mostrarMatriz();
            }
        }
        catch(const std::exception& e){
            cerr << "Error con los datos ingresados. "<< e.what() << endl;
        }
    
    }
    else if (tipoDato == "float"){
        Matriz<float> matriz1;
        Matriz<float> matriz2;
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
                resultado.mostrarMatriz();
            }
            else if(tipoOperacion == "-"){
                Matriz<float> resultado = matriz1 - matriz2;
                resultado.mostrarMatriz();
            }
            else if (tipoOperacion == "*"){
                Matriz<float> resultado = matriz1 * matriz2;
                resultado.mostrarMatriz();
            }
        }
        catch(const std::exception& e){
            cerr << "Error con los datos ingresados. "<< e.what() << endl;
        }
    }
}
template <typename T>
void Matriz<T>::mostrarMatriz(){
    for (size_t i = 0; i < datos.size(); ++i) {
            for (size_t j = 0; j < datos[0].size(); ++j) {
                cout << datos[i][j];
                if (j < datos[0].size() - 1) {
                    std::cout << " ";
                }
            }
            cout << endl;
    }
}





