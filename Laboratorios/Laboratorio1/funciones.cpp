#include "funciones.hpp"
#include <iostream>

void mostrarMenu(){
    std::cout <<"\n ---MENU---\n";
    std::cout <<"1. Agregar empleados\n";
    std::cout <<"2. Listar empleados\n";
    std::cout <<"3. Eliminar empleadp\n ";
    std::cout <<"4. Salir";

}


void procesarOpcion(Empleado empleados[], int &numEmpleados){
    int opcion;
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
    case 1:
        agregarEmpleado(empleados, numEmpleados);
        break;
    case 2:
        listarEmpleado(empleados, numEmpleados);
        break;
    case 3:
        eliminarEmpleado(empleados, numEmpleados);
        break;
    case 4:
        std::cout << "Saliendo del programa...\n";
        exit(0);
        break;
    
    default:
    std::cout << "opcion no valida. Intente de nuevo ...\n";
        break;
    }


}

void agregarEmpleado(Empleado  empleados[], int &numEmpleados){
    if (numEmpleados < MAX_EMPLEADOS){
        Empleado nuevoEmpleado;
        nuevoEmpleado.id = numEmpleados + 1;

        std::cout<<"Ingrese el nombre del empleado: ";
        std::cin >> nuevoEmpleado.nombre;

        std::cout<<"\nIngrese el salario del empleado: ";
        std::cin >> nuevoEmpleado.salario;


        std::cout<<"Empleado agregado con exito ";

        empleados[numEmpleados++] = nuevoEmpleado;
 
    }
    else{
        std::cout << "No se puede agregar mas, limite alcanzado ";
    }

}

void listarEmpleado(const Empleado  empleados[], int &numEmpleados){
    std::cout<<"---Lista de empleados\n";

    for (int i = 0; i < numEmpleados; i++){
        std::cout<< "ID: " << empleados[i].id << ", Nombre: " << empleados[i].nombre << ", Salario: " << empleados[i].salario;

    }


}


void eliminarEmpleado(Empleado  empleados[], int &numEmpleados){
    int idEliminar;

    std::cout<<"Ingrese el id del empleado al elimnar: ";
    std::cin >> idEliminar;

    for (int i = 0; i < numEmpleados; ++i){
        if (empleados[i].id = idEliminar){
            for (int j=i; j< numEmpleados -1; ++j){
                empleados[j] = empleados[j+1];

            }
        --numEmpleados;
        std::cout<<"Empleado eliminado con exito";
        return;

        }
    }



}


