import pandas as pd

def cargar_datos(nombre_archivo):
        """
        Funcion para cargar los datos a un dataframe del archivo csv obtenido de kaggle, con su manejo de errores 
        
        
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
    
def limpiar_datos(df):
    """
    Funcion para eliminar filas con datos nulos
    """
    # eliminar filas con valores faltantes 
    df = df.dropna()
    return df