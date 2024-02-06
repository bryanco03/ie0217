from data import Data
import matplotlib.pyplot as plt
from generador_reporte import generar_reporte

def main():
    datos = Data("T_FORM298C_F2AK_DIRECT.csv")
    datos.limpiar_datos()

    print("Este programa analiza los datos de los gastos de pequeñas compañías aéreas certificadas de Alaska. ")
    while True:
            print("1. Informacion revelante de las columnas con datos numericos")
            print("2. reporte de cada aerolinea")
            print("3. Gráficos")
            print("4. salir")
            print("")
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
                print("3 Gráfico de barras de horas en vuelo de las compañias en el 2023.")
                print("4.")
                opcion_grafico = input("Ingrese una opcion: ")
                if opcion_grafico == "1":
                    datos.grafico_dispersion_gastos_piloto()
                elif opcion_grafico == "2":
                    datos.grafico_barras_mantenimiento()
                elif opcion_grafico == "3":
                    datos.grafico_barras_horas_vuelo()
                elif opcion_grafico == "4":
                    datos.grafico_dispersion_gastos_combustible()


            
            elif opcion == "4":
                break
                
            else:
                print("Opcion desconocida")







if __name__ == "__main__":
    main()