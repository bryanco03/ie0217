#include <iostream>
using namespace std;

void test(){
    // se declara la variable var como estatica y se inicializa
    static int var = 0;
    ++var;

    cout << var << endl; 
}

int main(){

    test();
    test();

    return 0;
}