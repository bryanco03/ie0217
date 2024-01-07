#include "funciones.hpp"

int generateRandomNumber(int inter[]) {
    return rand() % (inter[1] - inter[0] + 1) + inter[0];
}

void menu(){
    cout << "---Menú---:" << endl;
    cout << "1. Jugar" << endl;
    cout << "2. Cambiar intervalo "<<endl; 
    cout << "3. Cambiar modo de juego" << endl;
    cout << "4. Salir" << endl;



}

void selecionarOpcion(int intervalo[], bool pistasDirectas){
    int opcion;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion){
    case 1:
        cout << pistasDirectas<< endl;
        jugar(intervalo,pistasDirectas);
        break;
    case 2:
        cambiarIntervalo(intervalo);
        break;
    case 3:
        pistasDirectas = cambiarModo(pistasDirectas);
        cout << pistasDirectas<< endl;
        break;
    case 4:
        exit(0);
        break;
    
    default:
        break;
    }

    
}

void jugar(int intervalo[], bool pistasDirectas){

    int numAdivinar = generateRandomNumber(intervalo);
    int num;
    int maxIntentos = int((intervalo[1]-intervalo[0])/3);

    cout << "Estoy pensando un numero entre " << intervalo[0] << " y " << intervalo[1] << endl;
    cout << "Tienes " << maxIntentos << " intentos para adivinarlo"<< endl;

    for (int intento = 0; intento < maxIntentos; ++intento){
        cout << "Intento #"<<intento +1 << endl << "Adivina el numero: ";
        cin >> num;

        if (pistasDirectas){

            if (num == numAdivinar){
                cout << "¡Has adivinado el numero!"<<endl;
                return ;
            }
            else if (num < numAdivinar){
                cout << "El numero a adivinar es mayor al que ingresaste."<< endl;
            }
            else if (num > numAdivinar){
            cout << "El numero a adivinar es menor al que ingresaste."<<endl;
            }

            else {
            cout << "Error con el numero ingresado"<<endl;
            }
        
        }
        else if (!pistasDirectas){
            if (abs(num - numAdivinar) > (intervalo[1] - intervalo[0]) / 4){
                cout << "Estas congelado"<< endl;
            }
            else if (abs(num - numAdivinar) > (intervalo[1] - intervalo[0]) / 6){
                cout << "Estas frio"<< endl;
            }
            else if (abs(num - numAdivinar) > (intervalo[1] - intervalo[0]) / 12){
                cout << "Estas caliente"<< endl;
            }
            else{
                cout << "Estas hirviendo"<< endl;
            }
            
            
        }
    }

}

void cambiarIntervalo(int intervalo[]){
    while (true){
        cout << "Ingrese el inicio del intervalo:  ";
        cin >> intervalo[0];
        cout << "Ingrese el final del intervalo:  ";
        cin >> intervalo[1];

        if (intervalo[1] <= intervalo[0]){
            cout << "Error, el final del intervalo debe ser mayor que el inicio" <<endl;
        }
        else{
            break;
        }
    }
}

bool cambiarModo(bool pistasDirectas){
    int opcion;
    cout << pistasDirectas<< endl;
    cout <<"---Modos de juego---" << endl;
    cout << "1. Mayor o Menor  "<< endl;
    cout << "2. Frio o Caliente  "<< endl;
    cout << "3. Atras  "<< endl;
    cout << "Elige una opcion  ";
    cin >> opcion;

    if (opcion == 1){
        cout << "Modo cambiado a MAYOR O MENOR" << endl;
        if (pistasDirectas){
            return pistasDirectas;
        }
        else{
            return !pistasDirectas;
        }
        cout << "Modo cambiado a MAYOR O MENOR" << endl;
    }
    else if (opcion == 2){
        if (pistasDirectas){
            return !pistasDirectas;
        }
        else{
            return pistasDirectas;
        }
        cout << "Modo cambiado a FRIO O CALIENTE" << endl;
    }
    else if (opcion == 3){
        return pistasDirectas;
    }
    else{
        cout <<"Error con la opcion ingresada";
    }
    
    
}



