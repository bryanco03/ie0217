#include <iostream>

using namespace std;

/* Data section*/
int variableGlobal = 10;


/* .text section*/
void funcioGlobal(){

    /* .data */
    static int variableLocalEstatica =5;

    /* stack setion*/
    int variableLocal= 20;

    /* Mostrar el valor de las variables*/
    cout << "Variable global "<< variableGlobal<< endl;
    cout << "Variable local estatica "<< variableLocalEstatica<< endl;
    cout << "Variable local "<< variableLocal<< endl;
}



int main(){

    /* stack section*/
    int variableLocalMain = 15;

    funcioGlobal();

    cout << "variable local en main "<< variableLocalMain << endl;


    /* heap section*/
    int* variableDinamica = new int;

    *variableDinamica = 25;

    cout << "Variable dinamica " << *variableDinamica << endl;

    delete variableDinamica;

    return 0;
}
