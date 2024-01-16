#include<iostream>  //  cout
#include<algorithm> // sort
#include<vector>    // vector

using namespace std;

bool myFunction (int i, int j){ return (i<j);}

struct myClass{
    bool operator() (int i,int j){ return (i<j);}
} myObject;

int main(){
    int myints[]={32, 71, 12, 45, 26, 80, 53, 33};
    vector<int> myvector (myints, myints+8);

    // usando comparador por default (<):
    sort (myvector.begin(),myvector.begin()+4); // salida (12 32 45 71) 26 80 53 33

    // usando una funcion como comparador
    sort (myvector.begin()+4, myvector.end(), myFunction); //  salida 12 32 45 71( 26 33 53 80)

    // usando un objeto
    sort (myvector.begin(), myvector.end(), myObject); // salida 12 26 32 33 45 53 71 80

    // mostrar contenido

    cout << "myvector contiene: ";
    for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it){
        cout << " "<<*it;
    }
    cout <<endl;

}
