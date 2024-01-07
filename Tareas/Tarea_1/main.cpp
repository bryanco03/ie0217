#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.hpp"
using namespace std;





int main(){

    int intervalo[2] = {0,25};
    bool pistasDirectas = false;

    srand(time(0)); // Semilla para generar números aleatorios


    while (true)
    {
        menu();
        selecionarOpcion(intervalo, pistasDirectas);
    }
    


    
    
    return 0;
}