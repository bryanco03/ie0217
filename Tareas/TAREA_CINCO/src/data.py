import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from generador_reporte import find_outliers_iqr
from iterador_dataframe import DataFrameIterator

class Data:
    def __init__(self, nombre_archivo):
        self.data = self.cargar_dataframe(nombre_archivo)

    def cargar_dataframe(self, nombre_archivo):
        try:
            df = pd.read_csv(nombre_archivo)
            return df
        except FileNotFoundError:
            print(f"El archivo {nombre_archivo} no fue encontrado.")
            return None
        except pd.errors.ParserError:
            print(f"Error al leer el archivo {nombre_archivo}. Verifique el formato del CSV.")
            return None
        except Exception as e:
            print(f"Se ha producido un error al cargar el archivo {nombre_archivo}: {str(e)}")
            return None

    def mostrar_datos(self):
        print(self.data)

    def limpiar_datos(self):

        # Eliminar elementos no validos
        self.data =  self.data.dropna()

        # Eliminar filas con la mayoria de columnas cero o cercanas a cero
        filtro = (self.data['EXP_FUEL_OIL'] <= 1) & (self.data['EXP_HULL_INS'] <= 1) & (self.data['EXP_THIRD_PARTY_LIAB_INS'] <= 1) & (self.data['EXP_PAX_LIAB_INS'] <= 1) & (self.data['EXP_MAINTENANCE'] <= 1) & (self.data['EXP_DEPRECIATION'] <= 1) & (self.data['FUEL_ISSUED'] <= 1)

        # Eliminar las filas que cumplen con el filtro
        self.data = self.data[~filtro]


    def mostar_estadisticas(self):
        for nombre_columna, serie in self.data.items():
            #print(serie.dtype)
            if serie.dtype == "float64":
                print("------------------------------------")
                print(f"Informacion de {nombre_columna}")
                # Calcular valores descriptivos
                print("Media:", serie.mean())
                print("Mediana:", serie.median())
                print("Desviación estándar:", serie.std())
                print("Mínimo:", serie.min())
                print("Máximo:", serie.max())
                print(f"Cuantiles:\n{serie.quantile([0.25, 0.5, 0.75])}")
                print("Valores atipicos:",find_outliers_iqr(serie))
                print("------------------------------------")
                print()
            else:
                continue
    
    def grafico_dispersion_gastos_piloto(self):
        plt.scatter(self.data["BLK_HOURS"],self.data["EXP_PILOT_COPILOT"])
        
        plt.xlabel("Horas de vuelos en un mes")
        plt.ylabel("Gastos en el piloto y copiloto(salario y viáticos)")
        plt.title("Gráfico de dispersion de los gastos de los pilotos y copilotos sobre las horas en vuelo en un mes")
        plt.show()

    def grafico_barras_mantenimiento(self):
        gastos_mantenimiento = self.data.groupby("CARRIER")["EXP_MAINTENANCE"].sum()

        plt.bar(gastos_mantenimiento.index, gastos_mantenimiento.values)
        plt.xlabel("Compañía aérea")
        plt.ylabel("Total de gastos en mantenimiento")
        plt.title("Total de gastos en mantenimiento por compañía aérea en el 2023")
        plt.show()

    
    def separar_carrier(self,carrier):
        iteador = DataFrameIterator(self.data)  
        for row in iteador:
            if row['CARRIER'] == carrier:
                yield row

    def grafico_barras_horas_vuelo(self):
        sns.barplot(data=self.data, x="CARRIER", y="FUEL_ISSUED")
        plt.xlabel("Compañía aérea")
        plt.ylabel("Horas en vuelo en 2023")
        plt.title("Horas de vuelo por compañía aérea en 2023")
        plt.show()
    
    def grafico_dispersion_gastos_combustible(self):
        sns.scatterplot(data=self.data, x="FUEL_ISSUED",y="EXP_FUEL_OIL")
        plt.xlabel("Combustible en galones")
        plt.ylabel("Gastos en combustible")
        plt.title("Horas de vuelo por compañía aérea en 2023")
        plt.show()

