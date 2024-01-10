#include <iostream>
using namespace std;

int main(){

    int num;
    cout <<"Enter total of students: ";
    cin >> num;

    float* ptr;

    //memoria designada para el numero de estudiantes
    ptr = new float[num];

    for (int i = 0; i < num; ++i){
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "\nDisplayin GPA of students" << endl;
    for (int i=0; i < num; ++i){
        cout << "Student" << i +1 << ": " << *(ptr+i)<< endl;
    }

    //liberar memoria 
    delete[] ptr;
    
    return 0;
}