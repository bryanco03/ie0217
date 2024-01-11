#include <iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout <<"I can eat!"<< endl;
        }

        int sleep(){
            cout <<"I can slepp!"<< endl;
        }

};

class Dog: public Animal{
    public:
        void bark(){
            cout <<"I can bark, woof, woof!"<< endl;
        }
};

int main(){
    Dog dog1;

    // Llamando metodos de la clase base

    dog1.eat();
    dog1.sleep();

    // Llamando metodos de la clase derivada
    dog1.bark();

    return 0;

}