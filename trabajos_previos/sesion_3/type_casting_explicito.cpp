#include <iostream>
using namespace std;

int main(){

    // Se declara una variable de tipo double y se inicializa
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // coversion tipo c
    int num_int1 = (int)num_double;
    cout << "num_int1 = " << num_int1 << endl;

    // coversion tipo funcion
    int num_int2 = int(num_double);
    cout << "num_int2 = " << num_int2 << endl;
    
    return 0;
}