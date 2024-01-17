#include <iostream>
using namespace std;

int main(){
    double numerator, denominator, arr[4] = {0.0,0.0,0.0,0.0};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try{

        // tira exepcion si se sale del rango del arreglo
        if (index >= 4){
            throw "Error: Array out of bonds";
        }

        // no se ejecuta se salta error
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0){
            throw 0;
        }

        // no se ejecuta si el denominador es cero

        arr[index] = numerator / denominator;
        cout << arr[index] << endl;

    }
    // atrapa la exepcion de fuera de rango
    catch (const char* msg){
        cout << msg << endl;
    }

    // atrapa la execion si el denominador es cero
    catch(int num){
        cout << "Error: cannot divide by " << num << endl;
    }

    catch (...){
        cout << "Unexpected exception" << endl;
    }



}