#include <iostream>
using namespace std;

// Se declara una funcion 
int add(int a, int b){
    return (a + b);
}

int main(){
    int sum;
    // Se llama la funcion y el valor retornado de esta se guarda en sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0; 
}