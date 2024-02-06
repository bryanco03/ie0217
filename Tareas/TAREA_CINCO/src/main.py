from data import Data
import matplotlib.pyplot as plt
from generador_reporte import generar_reporte

def main():

    """
    Funcion main del programa, lee instancia un objeto  Data, y se encuentran opciones como mostrar informacion relevante de las columnas, reporte del total de gastos de cada aerolinea,
    visualizacion de los graficos y mostrar datos de una aerolinea espeficica
    
    """


    datos = Data("T_FORM298C_F2AK_DIRECT.csv")
    if not datos.data.empty:
        print("Este programa analiza los datos de los gastos de pequeñas compañías aéreas certificadas de Alaska. ")
        datos.limpiar_datos()
        while True:

                print("1. Informacion revelante de las columnas con datos numericos")
                print("2. reporte de cada aerolinea")
                print("3. Gráficos")
                print("4. Mostrar datos de una aerolinea")
                print("5. salir")
                opcion = input("Ingrese una opcion: ")
                if opcion == "1":
                    datos.mostar_estadisticas()
                elif opcion == "2":
                    reportes =  generar_reporte(datos.data)
                    for report in reportes:
                        print(report)
                elif opcion == "3":
                    print("¿Cual grafico deseas observar?")
                    print("1. Gráfico de dispersion de gastos en pilotos y copilotos sobre las horas en vuelos en un mes")
                    print("2. Gráfico de barras de los gastos en mantenimiento de las compañias en el 2023")
                    print("3. Gráfico de barras de horas en vuelo de las compañias en el 2023.")
                    print("4. Gráfico de dispersion de gastos en combustible sobre los galones de combustible utilizados ")
                    opcion_grafico = input("Ingrese una opcion: ")
                    if opcion_grafico == "1":
                        datos.grafico_dispersion_gastos_piloto()
                    elif opcion_grafico == "2":
                        datos.grafico_barras_mantenimiento()
                    elif opcion_grafico == "3":
                        datos.grafico_barras_horas_vuelo()
                    elif opcion_grafico == "4":
                        datos.grafico_dispersion_gastos_combustible()
                    else:
                        print("Opcion desconocida")
                elif opcion == "4":
                    carrier = input("ingrese una aerolinea: ")
                    aerolinea_datos = datos.separar_carrier(carrier)
                    for row in aerolinea_datos:
                        print("-----------------------")
                        print(row)
                        print("-----------------------\n")
                elif opcion == "5":
                    print("Saliendo del programa")
                    break
                else:
                    print("Opcion desconocida")
    else:
        print("La carga de los datos no fue exitoso, por favor intentelo de nuevo")


if __name__ == "__main__":
    main()