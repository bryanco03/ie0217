import pandas as pd
import matplotlib.pyplot as plt
from generador_reporte import find_outliers_iqr

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
        filtro = (self.data['EXP_FUEL_OIL'] <= 10) & (self.data['EXP_HULL_INS'] <= 10) & (self.data['EXP_THIRD_PARTY_LIAB_INS'] <= 10) & (self.data['EXP_PAX_LIAB_INS'] <= 10) & (self.data['EXP_MAINTENANCE'] <= 10) & (self.data['EXP_DEPRECIATION'] <= 10) & (self.data['FUEL_ISSUED'] <= 10)

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
                print("Cuantiles:", serie.quantile([0.25, 0.5, 0.75]))
                print("Valores atipicos:\n",find_outliers_iqr(serie))
                print("------------------------------------")
                print()
            else:
                continue



