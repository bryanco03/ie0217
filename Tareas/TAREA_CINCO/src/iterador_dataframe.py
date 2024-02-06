import pandas as pd

class DataFrameIterator:

    """
    
    Iterador personalizado para recorrer las filas  de un data frame

    Atributos:

    - dataframe: dataframe de la biblioteca pandas el cual va aser iterado
    
    - index: indice del iterador
    
    """


    def __init__(self, dataframe):

        """
        Inicializador de DataframeIterador, inicializa los atributos

        """

        self.dataframe = dataframe
        self.index = 0

    def __iter__(self):

        """
        retorna el iterador
        
        """


        return self

    def __next__(self):

        """
        retorna la fila al usar el iterador

        
        """


        if self.index >= len(self.dataframe):
            raise StopIteration
        row = self.dataframe.iloc[self.index]
        self.index += 1
        return row
