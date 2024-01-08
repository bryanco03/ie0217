#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.hpp"
using namespace std;





int main(){

    int intervalo[2] = {0,20};
    bool pistasDirectas = true;
    bool* ptrPistasDirectas = &pistasDirectas;

    srand(time(0)); // Semilla para generar números aleatorios


    while (true)
    {
        menu();
        selecionarOpcion(intervalo, ptrPistasDirectas);
    }
    


    
    
    return 0;
}