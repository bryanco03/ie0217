
#include <iostream>
using namespace  std;

int main(){
    int var1 = 5;
    // int var2 = 2;
    // int var3 = 2;

    switch (var1){
    case 1:
        cout << "Caso 1!\n";
        break;
    case 2:
    case 3:
        cout << "Caso final!\n";
        break;
    
    default:
        cout << "Caso default!\n";
        break;
    }
}