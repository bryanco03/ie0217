#include <iostream>
using namespace std;

int main(){
    double numerator, denominator, divide;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {

        // Tira una excepcion si denominador es 0
        if (denominator ==0)
            throw 0;

        // no se ejecuta si el denominador es 0
        divide =  numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;

    }
    catch (int num_exception){
        cout << "Error: cannot: divide by " << num_exception << endl;
    }
}
