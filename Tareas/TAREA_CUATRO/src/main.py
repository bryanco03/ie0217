from Alergias import Alergia
from EvaulacionEspecifica import EvaluacionEspecifica
from TiposAlergias import TiposDeAlergias
from EvaulacionGeneral import EvaluacionGeneral

import cProfile

def main():

    """
    Funcion Main, Se muestra el menú del programa, el usuario ingresa la opcion que desea y se ejecuta la opcion
    El programa cuenta con las siguientes opciones:

    - Ingresar puntuación de alergias: El usuario ingresa su puntuacion en alergias y se le indica cuales alergias posee segun la la lista de alergias preterminadas

    - Ingresar tipos de alergias: El usuario puede ingresar las alergias por dos maneras, por nombre y valor o por nombre o valor, las alergias ingresadas son añadidas a una lista de alergias del usuario la cual despues se realiza la evauluacion de la puntuacion del usuario

    - Calcular puntuación total de alergias. Se calculan la puntuacion del usuario segun las alergias que fueron ingresadas en la opcion anterior

    - Mostrar informacion de las alergias: Se muestra la informacion de lista de alergias del programa, las del usuario, y una en especifico


    - Salir: se finaliza el programa
    
    """

    profiler = cProfile.Profile()
    profiler.enable()


    # Crear instancias de alergias
    alergias = [
        Alergia("huevos", 1),
        Alergia("cacahuetes", 2),
        Alergia("mariscos", 4),
        Alergia("fresas", 8),
        Alergia("tomates", 16),
        Alergia("chocolate", 32),
        Alergia("polen", 64),
        Alergia("gatos", 128),
        Alergia("sardina", 256),
        Alergia("gluten", 512),
        Alergia("huevo", 1024)
    ]

    # Crear instancia de TiposDeAlergias
    tipos_de_alergias = TiposDeAlergias()
    for alergia in alergias:
        tipos_de_alergias.agregar_alergia(alergia)

# Interfaz de usuario
    print("Bienvenido a la evaluación de alergias.")
    while True:

        print("Seleccione una opción:")
        print("1. Ingresar puntuación de alergias")
        print("2. Ingresar tipos de alergias")
        print("3. Calcular puntuación total de alergias")
        print("4. Mostrar informacion de las alergias")
        print("5. Salir")
        opcion = input("Opción: ")

        if opcion == "1":
            puntuacion = int(input("Ingrese su puntuación de alergia: "))
            evaluacion_especifica = EvaluacionEspecifica(tipos_de_alergias.obtener_alergias())
            evaluacion_especifica.imprimir_evaluacion(puntuacion)

        elif opcion == "2":
            print("Ingresar por:")
            print("1. Nombre y valor.")
            print("2. Nombre o valor.")
            opcion_ingresar = input("Ingrese una opcion: ")

            if opcion_ingresar == "1":
                nombre_alergia = input("Ingrese el nombre de la alergia: ")
                valor_alergia = int(input("Ingrese el valor de la alergia: "))
                tipos_de_alergias.agregar_alergia_nombre_valor(nombre_alergia, valor_alergia)

            elif opcion_ingresar == "2":
                entrada = input("Ingrese el nombre o valor de la alergia: ")
                nombre, valor = tipos_de_alergias.analizar_alergia(entrada)
                if nombre and valor:
                    print(f"Alergia agregada correctamente: {nombre} - {valor}")
                elif nombre:
                    print(f"Se ha agregado la alergia sin valor: {nombre}")
                elif valor:
                    print(f"Se ha agregado la alergia sin nombre: {valor}")
                else:
                    print("No se pudo agregar la alergia.")

                    
        elif opcion == "3":
            alergias_usuario = tipos_de_alergias.obtener_alergias_usuario()
            alergias_usuario_sin_nombre = tipos_de_alergias.obtener_alergias_sin_nombre()
            alergias_usuario_sin_valor = tipos_de_alergias.obtener_alergias_sin_valor()
            evaluacion_general = EvaluacionGeneral(tipos_de_alergias)
            puntuacion_general = evaluacion_general.calcular_puntuacion_general(alergias_usuario)
            evaluacion_general.imprimir_resultados(alergias_usuario, puntuacion_general,alergias_usuario_sin_nombre, alergias_usuario_sin_valor)

        elif opcion == "4":
            print("Mostrar informacion de:")
            print("1. todas las alergia del sistema")
            print("2. Alergias del usuario.")
            print("3. Una en especifico")
            opcion_informacion = input("Opción: ")
            if opcion_informacion == "1":
                alergias[0].mostrar_alergias(alergias)

            elif opcion_informacion == "2":
                print("----ALERGIAS DEL USUARIO----")
                for alergia in tipos_de_alergias.obtener_alergias_usuario():
                    print(alergia)

                print("----ALERGIAS DEL USUARIO SIN NOMBRE----")
                for alergia in tipos_de_alergias.obtener_alergias_sin_nombre():
                    print(f"Alergia: ----- , Valor: {alergia}")
                    

            
                print("----ALERGIAS DEL USUARIO SIN VALOR----")
                for alergia in tipos_de_alergias.obtener_alergias_sin_valor():
                    print(f"Alergia: {alergia} , Valor: -----")


            elif opcion_informacion == "3":
                nombre_alergia = input("Nombre de la alergia: ")
                alergias[0].mostrar_alergias(alergias,nombre_alergia)
        elif opcion == "5":
            print("Saliendo del programa.")
            break

        else:
            print("Opción no válida.")

    profiler.disable()
    profiler.print_stats()

    

if __name__ == "__main__":
    main()