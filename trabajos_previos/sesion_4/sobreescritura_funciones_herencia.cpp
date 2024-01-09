#include <iostream>
using namespace std;

class Base{
    public:
        void print(){
            cout << "Base Function" << endl;
        }
};

class Derived : public Base{
    public: 
        void print(){
            cout << "Derived function" << endl; 
        }
};

int main(){
    Derived derived1, derived2;
    // desde la clase derivada
    derived1.print();


    derived2.Base::print();
}