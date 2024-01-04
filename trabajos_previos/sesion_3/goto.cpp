#include <iostream>
using namespace std; 

int main(){
    float num, average, sum = 0.0;
    int i,n;

    cout << "Maximo numero de entradas: ";
    cin >> n;

    for (i = 1; i <= n; ++i){
        cout << "Ingrese n" << i << ": ";
        cin >> num;

        if (num <0.0){
            // el programa salta hasta la seccion jump
            goto jump;
        }
        sum +=num;
    }

    jump:
    average = sum/ i-1;
    cout <<"\nPromedio = "<< average << endl;
    return 0; 
}