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
            print("3. salir")
            print("")
            opcion = input("Ingrese una opcion: ")

            if opcion == "1":
                datos.mostar_estadisticas()
            elif opcion == "2":
                columnas = ["EXP_PILOT_COPILOT","EXP_FUEL_OIL","EXP_HULL_INS","EXP_THIRD_PARTY_LIAB_INS","EXP_PAX_LIAB_INS","EXP_MAINTENANCE","EXP_DEPRECIATION"]
                #reportes = sum_columns(datos.data,columnas)
                reportes =  generar_reporte(datos.data, columnas)
                for report in reportes:
                    print(report)
            elif opcion == "3":
                break






    #datos.mostrar_datos()
    #datos.mostar_estadisticas()
    #generar_reporte(datos.data)
    #datos.data.boxplot(column="EXP_PILOT_COPILOT")
    #plt.show()
# "EXP_PILOT_COPILOT","EXP_FUEL_OIL","EXP_HULL_INS","EXP_THIRD_PARTY_LIAB_INS","EXP_PAX_LIAB_INS","EXP_MAINTENANCE","EXP_DEPRECIATION","FUEL_ISSUED","BLK_HOURS"

if __name__ == "__main__":
    main()