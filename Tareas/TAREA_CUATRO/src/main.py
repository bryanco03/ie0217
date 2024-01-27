from Alergias import Alergia
from EvaulacionEspecifica import EvaluacionEspecifica
from TiposAlergias import TiposDeAlergias
from EvaulacionGeneral import EvaluacionGeneral


def es_potencia_de_dos(numero):
    return (numero & (numero - 1)) == 0 and numero != 0



def main():
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
        opcion = input("Seleccione una opción:\n1. Ingresar puntuación de alergia\n2. Ingresar tipos de alergias\n3. Calcular puntuación total de alergias\n4. Salir\nOpción: ")

        if opcion == "1":
            puntuacion = int(input("Ingrese su puntuación de alergia: "))
            evaluacion_especifica = EvaluacionEspecifica(tipos_de_alergias.obtener_alergias())
            evaluacion_especifica.imprimir_evaluacion(puntuacion)

        elif opcion == "2":
            try:
                nombre_alergia = input("Ingrese el nombre de la alergia: ")
                valor_alergia = int(input("Ingrese el valor de la alergia: "))
                if es_potencia_de_dos(valor_alergia):
                    nueva_alergia = Alergia(nombre_alergia, valor_alergia)
                    tipos_de_alergias.agregar_alergia(nueva_alergia)
                    print("Alergia agregada correctamente.")
                else:
                    print("El valor de la alergia debe ser una potencia de 2.")

            except ValueError:
                print("La puntacion debe ser un numero entero")

        elif opcion == "3":
            alergias_usuario = input("Ingrese las alergias que tiene separadas por espacios (Ejemplo: huevos cacahuetes): ").split()
            alergias_evaluadas = []
            for alergia_usuario in alergias_usuario:
                valor_alergia = tipos_de_alergias.buscar_valor_por_alergia(alergia_usuario)
                if valor_alergia:
                    alergias_evaluadas.append(Alergia(alergia_usuario, valor_alergia))
                else:
                    print(f"No se encontró la alergia '{alergia_usuario}'.")
            evaluacion_general = EvaluacionGeneral(tipos_de_alergias)
            puntuacion_general = evaluacion_general.calcular_puntuacion_general(alergias_evaluadas)
            evaluacion_general.imprimir_resultados(alergias_evaluadas, puntuacion_general)


        elif opcion == "4":
            print("Saliendo del programa.")
            break

        else:
            print("Opción no válida.")

if __name__ == "__main__":
    main()