
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> oper;
    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+' :
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-' :
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*' :
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/' :
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    
    default:
        // si el operador no corresponde con ningun caso
        cout << "Error!, operador incorrecto";
        break;
    } 
    return 0;
}