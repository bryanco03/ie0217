#include <iostream>
using namespace std;

class ClassB;

class ClassA{
    public:
        // Construtor de la clase ClassA, inicializa numA a 12
        ClassA() : numA(12) {}
    private:
        int numA;
        // declaracion de funcion amiga
        friend int add(ClassA, ClassB);
};

class ClassB{
    public: 
        // Construtor de la clase ClassB, inicializa numB a 1
        ClassB() : numB(1){}
    private: 
        int numB;
        // declaracion de funcion amiga
        friend int add(ClassA, ClassB);

};

// Funcion amiga de ClassA y ClassB

int add(ClassA objectA, ClassB objectB){
    return (objectA.numA + objectB.numB);
}

int main(){
    ClassA objectA;
    ClassB objectB;
    cout << "sum:" << add(objectA, objectB)<<endl;
    return 0;
}