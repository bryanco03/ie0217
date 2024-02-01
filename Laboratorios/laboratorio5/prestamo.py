import pandas as pd 
import numpy as np 
import matplotlib.pyplot as plt 

class Prestamo:

    # Construtor de prestamo inicializa los atributos
    def __init__(self, monto_prestamo, tasa_interes_anual, coutas):
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.coutas = coutas
        self.amortizacion = self.calcular_amortizacion()

    # Metodo para calcular la amortizacion del prestamo
    def calcular_amortizacion(self):
        try:
            # se cacula el interes mensual
            tasa_interes_mensual = self.tasa_interes_anual/ 12 / 100
            # calcular cuota mensual
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo)/(1 - (1+ tasa_interes_mensual)**-self.coutas)
            saldo_restante = self.monto_prestamo
            amortizacion = []
            # Se itera con el numero de cuotas para calcular el aporte al capital, interes abonado, y se agrega a amortizacion
            for cuota in range(1, self.coutas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente
                saldo_restante -= amortizacion_principal
                amortizacion.append({"cuota" : cuota, "Interes" : interes_pendiente, "amortizacion": amortizacion_principal, "Saldo restante" : saldo_restante })
            return amortizacion
        except ZeroDivisionError: # Exepcion si el usuario ingresa un numero de cuotas de cero
            print("Error la cantidad de coutas no puede ser cero")
            return[]
        
    def generar_reporte(self, archivo_salida):
        try:
            # Se crea un dataframe  con los datos de amortizacion
            df = pd.DataFrame(self.amortizacion)
            # Se escibe un archivo csv con los datos
            df.to_csv(archivo_salida, index=False)
            print(f"Reporte generado con exito: {archivo_salida}")
        except Exception as e:
            print(f"ocurrio un error al generar el reporte: {str(e)}")

    def graficar_amortizacion(self):
        # Se toman los datos a graficar
        df = pd.DataFrame(self.amortizacion)
        data =  np.array([df["Interes"], df["amortizacion"]])

        # Se crea un grafico de baras con los datos de interes y amortizacion
        plt.bar(df["cuota"], data[0], label="Interes" )
        plt.bar(df["cuota"], data[1], bottom=data[0], label= "amortizacion")

        # se personaliza el grafico
        plt.xlabel("Numero de cuota")
        plt.ylabel("Monto")
        plt.title("Amortizacion e Interes por cuota")
        plt.legend()
        plt.show()


def main():

    try:
        # pedir el monto
        # pedir tasa de inteses
        # pedir cantidad de cuotas
        monto =  float(input("Ingrese el monto del prestamo: "))
        tasa_interes_anual = float(input("Ingrese la tasa de interes Anual (%): "))
        cuotas = int(input("Ingrese la cantidad de cuotas: "))

        # Instanciar prestamo
        prestamo = Prestamo(monto, tasa_interes_anual, cuotas)

        # generar reporte
        prestamo.generar_reporte("prestamo.csv")

        # Imprimir informacion , monto , tasa ,cuotas
        print(f"Monto: {prestamo.monto_prestamo}")
        print(f"Tasa de interes anual: {prestamo.tasa_interes_anual}")
        print(f"Numero de cuotas: {prestamo.coutas}")

        # graficar amortizacion
        prestamo.graficar_amortizacion()


    except ValueError: # si ingresa un dato no valido
        print("Error: Con el tipo de dato ingresado.")
    except Exception as e: # si se produce algun otro error en la ejecucion del programa
        print(f"Se ha producido un error: {str(e)}")




if __name__ == "__main__":
    main()

