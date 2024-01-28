class Alergia:
    
    
    """
    Clase que representa una alergia

    Atributos:
    - nombre: nombre de la alergia
    - valor: valor de la alergia dentro del programa

    Métodos:
    - mostrar_alergias(): Muestra una lista de alergias preterminadas, y ademas se puede buscar una en especifico

    
    """

    def __init__(self, nombre, valor):

        """
        Inicializa la clase Alergia, e inicializa sus atributos

        Parámetros
        - nombre: String que simboliza el nombre de la alergia
        - valor: Numero entero potencia de dos el cual simboliza el valor de la alergia dentro del programa

        """
        self.nombre = nombre
        self.valor = valor

    def __str__(self):
        """
        Método para mostrar los atributos de un objeto de la clase Alergia 
        
        """
        return f"Alergia: {self.nombre}, Valor: {self.valor}"


    def mostrar_alergias(self, alergias, nombre_alergia = ""  ):
        
        """
        Método para mostrar informacion de varias o de una sola alergia

        Parámetros:
        - alergias: Lista la cual contiene objetos instanciados de la clase Alergia
        - nombre_alergia: nombre de la alergia especifica la cual se desea mostrar la informacion, Por default esta vacio, lo cual hace se que muestre la lista entera.

        """
        
        if nombre_alergia == "":
            print("----LISTA DE ALERGIAS----")
            for alergia in alergias:
                print(alergia)
        else:
            alergia_encontrada =  False
            for alergia in alergias:
                if alergia.nombre == nombre_alergia:
                    print("----INFORMACION ALERGIA----")
                    print(alergia)
                    alergia_encontrada = True
            if alergia_encontrada == False:
                print("Alergia No Encontrada")
                

    

    

