import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from generador_reporte import encontrar_num_atipicos
from iterador_dataframe import DataFrameIterator

class Data:
    """
    Clase Data, representa al cojunto de datos a los cuales se realiza un analisis

    Atributos:

    - data: Cojunto de datos contenidos en un dataframe de pandas

    Métodos:
    
    - cargar_dataframe(): Se encarga de cargar los datos en un archivo csv y los almacena en un dataframe.

    - limpiar_datos(): Se encarga de limpiar los datos del dataframe en busca de valores nulos o otros que no sean de gran utilidad al analisis.

    - mostar_estadisticas(): Método el cual imprime los valores descriptivos como media, desviacion estándar, cuartiles, entre otros a las columnas relacionadas con el funcionamiento de las compañias aereas.

    - separar_carrier(): Método generador utilizado para separar los datos de una aerolinea. 

    - grafico_dispersion_gastos_piloto(): Método que utiliza la biblioteca matplotlib para realizar un grafico de dispersion entre los gastos de los pilotos y copilotos, y horas en vuelo.

    - grafico_barras_mantenimiento(): Método que que utiliza la biblioteca matplotlib para realizar un grafico de barras el cual muestra los gastos de mantenimiento de cada aerolinea en el 2023.

    -  grafico_barras_horas_vuelo(): Método que que utiliza la biblioteca seaborn para realizar un grafico de barras donde se muestran las horas en vuelo de cada compañia aerea en 2023.

    -  grafico_dispersion_gastos_combustible(): : Método que que utiliza la biblioteca seaborn para realizar un grafico de dispersion entre los gastos en combustibles y galones de combustibles utilizados


    """


    def __init__(self, nombre_archivo):
        """
        
        Inicializador de Data, carga los datos del archivo csv y los almacena en el dataframe data
        
        """
        self.data = self.cargar_dataframe(nombre_archivo)

    def cargar_dataframe(self, nombre_archivo):

        """
        Método para cargar datos de un csv y almacenarlos en el atributo data

        Parametros:

        - nombre_archivo: string que contiene el nombre del archivo csv.

        Retorna:

        - dataframe si la carga de datos fue exitosa, por lo contrario un dataframe vacio
        
        """


        try:
            df = pd.read_csv(nombre_archivo)
            return df
        except FileNotFoundError:
            print(f"El archivo {nombre_archivo} no fue encontrado.")
            return pd.DataFrame()
        except pd.errors.ParserError:
            print(f"Error al leer el archivo {nombre_archivo}. Verifique el formato del CSV.")
            return pd.DataFrame()
        except Exception as e:
            print(f"Se ha producido un error al cargar el archivo {nombre_archivo}: {str(e)}")
            return pd.DataFrame()

    def limpiar_datos(self):

        """
        Método para limpiar los datos para que el proceso de analisis se realize de forma correcto, elimina elementos nulos y elimina filas con la mayoria de elementos son cero


        """
        # Eliminar elementos no validos
        self.data =  self.data.dropna()

        # Eliminar filas con la mayoria de columnas cero o cercanas a cero
        filtro = (self.data['EXP_FUEL_OIL'] <= 1) & (self.data['EXP_HULL_INS'] <= 1) & (self.data['EXP_THIRD_PARTY_LIAB_INS'] <= 1) & (self.data['EXP_PAX_LIAB_INS'] <= 1) & (self.data['EXP_MAINTENANCE'] <= 1) & (self.data['EXP_DEPRECIATION'] <= 1) & (self.data['FUEL_ISSUED'] <= 1)

        # Eliminar las filas que cumplen con el filtro
        self.data = self.data[~filtro]


    def mostar_estadisticas(self):

        """
        Método para mostrar valores descriptivos en las columnas numericas del dataframe, se muestran la media, mediana, desviacion estándar, minimo, maximo, los cuartiles y cuantos valores atipicos se encontraron
        
        """

        for nombre_columna, serie in self.data.items():
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
                print("Valores atipicos:",encontrar_num_atipicos(serie))
                print("------------------------------------")
                print()
            else:
                continue
    
    def grafico_dispersion_gastos_piloto(self):

        """
        Método para graficar los datos de BLK_HOURS el cual corresponde las horas vuelo entre los datos de EXP_PILOT_COPILOT que corresponde a los gastos de la aerolinea en piltos y copilotos

        """

        plt.scatter(self.data["BLK_HOURS"],self.data["EXP_PILOT_COPILOT"])
        
        plt.xlabel("Horas de vuelos en un mes")
        plt.ylabel("Gastos en el piloto y copiloto(salario y viáticos)")
        plt.title("Gráfico de dispersion de los gastos de los pilotos y copilotos sobre las horas en vuelo en un mes")
        plt.show()

    def grafico_barras_mantenimiento(self):

        """
        Método para crear un grafico de barras el cual muestra los gastos en mantenimientos de cada compáñia aerea en el 2023        
        
        """

        # se agrupan los datos por carrier y se suman
        gastos_mantenimiento = self.data.groupby("CARRIER")["EXP_MAINTENANCE"].sum()

        plt.bar(gastos_mantenimiento.index, gastos_mantenimiento.values)
        plt.xlabel("Compañía aérea")
        plt.ylabel("Total de gastos en mantenimiento")
        plt.title("Total de gastos en mantenimiento por compañía aérea en el 2023")
        plt.show()

    
    def separar_carrier(self,carrier):

        """
        Método generador el cual separa los datos por aerolinea, utilizando un iterador personalizado 
        
        """

        iteador = DataFrameIterator(self.data)  
        encontrado = False
        for row in iteador:
            if row["CARRIER"] == carrier:
                encontrado = True
                yield row
        if not encontrado:
            yield f"No se encontraron elementos con la  aerolinea: {carrier}"

    def grafico_barras_horas_vuelo(self):

        """

        Método para graficar las horas de vuelo de cada aerolinea en el 2023

        """

        sns.barplot(data=self.data, x="CARRIER", y="BLK_HOURS")
        plt.xlabel("Compañía aérea")
        plt.ylabel("Promedio de horas en vuelo en un mes ")
        plt.title("Horas de vuelo por compañía aérea")
        plt.show()
    
    def grafico_dispersion_gastos_combustible(self):

        """

        Método para graficar los datos de FUEL_ISSUED que corresponde al los galones de combustible entre los datos de EXP_FUEL_OIL que son los gastos en combustible.

        """


        sns.scatterplot(data=self.data, x="FUEL_ISSUED",y="EXP_FUEL_OIL")
        plt.xlabel("Combustible en galones")
        plt.ylabel("Gastos en combustible")
        plt.title("Gastos de combustible en funcion del combustible en galones utilizado")
        plt.show()

