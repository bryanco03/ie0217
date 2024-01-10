#include <iostream>
using namespace std;

class Student{
    private:
        int age;
    public: 
        // construtor, inicializa age a 12.
        Student() : age(12) {}
        void getAge(){
            cout <<"Age = " << age <<endl;
        }
};

int main(){
     // reservar memoria dinamica a un objeto student
    Student* ptr = new Student;

     // llamar a getAge()
    ptr->getAge();

    // liberar memoria

    delete ptr;

    return 0;
}
