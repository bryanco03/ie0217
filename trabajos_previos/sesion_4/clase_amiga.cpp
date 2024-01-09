#include <iostream>

using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;

        // Declaracion de clase amiga
        friend class ClassB;
    public:
        // Construtor para inicializar numA a 12
        ClassA() : numA(12){}
};

class ClassB {
    private:
        int numB;

    public: 
        // Construtor para inicializar numB a 1
        ClassB(): numB(1){}

        // metodo amigo para la clase ClassA
        int add(){
            ClassA objectA;
            return objectA.numA + numB;

        }
};

int main(){
    ClassB objectB;
    cout <<"Sum: " << objectB.add();
}