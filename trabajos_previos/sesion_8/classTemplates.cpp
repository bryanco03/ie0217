#include<iostream>
using namespace std;
// Template de clase 

template <class T>
class Number{
    private:
        // Variablde tipo T
        T num;
    public:
    Number(T n): num(n){} // construtor

    T getNum(){
        return num;
    }
};

int main(){

    // crear objeto con tipo entero
    Number<int> numberInt(7);

    // crear objeto con tipo double
    Number<double> numberDouble(7.7);

    cout << " Number = " << numberInt.getNum() <<endl;
    cout << " Number = " << numberDouble.getNum() <<endl;

    return 0;

}

