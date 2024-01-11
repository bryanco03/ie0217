#ifndef MOTOCOCHE_HPP
#define MOTOCOCHE_HPP

#include "coche.hpp"
#include "moto.hpp"
#include <iostream>
using namespace std;

class MotoCoche : public Coche, public Moto{
    public:
        MotoCoche(int velocidad,int numPuertas, bool tieneCasco);

};




#endif