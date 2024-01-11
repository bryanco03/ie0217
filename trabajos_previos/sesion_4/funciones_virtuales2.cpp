#include <iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        //codigo
        cout <<"Base"<< endl; 
    }
};

class Derived : public Base{
    public:
        void print(){
            //codigo
            cout << "Derivado" << endl;
        } 
};

int main(){
    Derived  derived1;
    // puntero de tipo base que apunta a derived1
    Base* base1= &derived1;

    // llamar a la funcion de la clase derived
    base1->print();
    return 0;
}