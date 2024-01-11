#ifndef MOTO_HPP
#define MOTO_HPP

#include "Vehiculo.hpp"
#include <iostream>
using namespace std;

class Moto : public Vehiculo{
    public:
        Moto(int velocidad, bool tieneCasco);
        void usarCasco();
        

    private:
            bool tieneCasco;
};




#endif