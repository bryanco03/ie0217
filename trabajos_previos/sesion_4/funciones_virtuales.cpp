#include <iostream>
using namespace std;

class Base{
    public:
    void print(){
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
    Base* base1= &derived1;

    base1->print();
    return 0;
}