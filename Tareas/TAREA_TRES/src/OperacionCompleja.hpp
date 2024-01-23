#ifndef OPERACIONESCOMPLEJAS_HPP
#define OPERACIONESCOMPLEJAS_HPP
#include <complex>
#include"Matriz.hpp"


class OperacionesComplejas{

        public:

        bool validarSumaResta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        bool validarMultiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        Matriz<complex<double>> suma(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        Matriz<complex<double>> resta(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);

        Matriz<complex<double>> multiplicacion(const Matriz<complex<double>>& matriz1, const Matriz<complex<double>>& matriz2);


};




#endif