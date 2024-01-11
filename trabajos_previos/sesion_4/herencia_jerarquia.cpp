#include <iostream>
using namespace std;

class Animal{
    public:
        void info(){
            cout << "I am a animal."<< endl;
        }
};

class Dog : public Animal {
    public:
        void bark(){ cout << "I am a dog, Woof woof"<< endl;};
};

class Cat : public Animal {
    public:
        void meow(){ cout << "I am a cat, meow meow"<< endl ;}
};

int main(){

    // Se crea un objeto de la clase perro
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();
    dog1.bark();

    // Se crea un objeto de la clase gato
    Cat cat1;
    cout << "Cat Class:" << endl;
    cat1.info();
    cat1.meow();


    return 0;


}