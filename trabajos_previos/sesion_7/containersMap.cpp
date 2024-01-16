#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int, string> student;

    // Se usa [] para añadir elementos nuevos

    student[1] = "Jacqueline";
    student[2] = "Blake";
    
    // usar insert() para añadir elementos
    student.insert(make_pair(3, "Denisse"));
    student.insert(make_pair(4, "Blake"));

    // key repetida, se sobrepone
    student[5] = "Timothy";
    student[5] = "Aaron";

    // mostrar map
    for (int i = 1; i <= student.size(); ++i){
        cout <<"Student["<<i<<"]:" << student[i] << endl;
    }

}