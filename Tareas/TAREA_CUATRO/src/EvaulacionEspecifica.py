class EvaluacionEspecifica:

    
    """
    Clase EvaulacionEspecifica, la cual agarra la puntuacion del usuario en alergias y le indica cuales possee segun la lista de alergias preterminado en el programa

    Atributos:
    - alergias = lista de objetos de la clase Alergia, la cual es la default del programa

    Métodos
    - evaluar_alergias(): toma la puntuacion del usuario y retorna las alergias que tiene 
    - imprimir_evaluacion(): Muestra al usuario las alergias que tiene segun la puntuacion ingresada
    """


    def __init__(self, alergias):
        """
        Inicializa la clase EvaluacionEspecifica

        """

        self.alergias = alergias

    def evaluar_alergias(self, puntuacion):

        """
        Agarra la puntuacion del usuario y le indica cuales alergias tiene, coomo cada alergia tiene un valor correspondiente una
        potencia de dos, se usa el Operador bitwise and (&) para obtener esas alergias

        Parámetros
        - puntuacion: puntuacion del usuario sobre las alergias

        Retorna

        - Lista de las alergias del usuario

        """
        alergias_evaluadas = []
        for alergia in self.alergias:
            if puntuacion & alergia.valor:
                alergias_evaluadas.append(alergia)
        return alergias_evaluadas

    def imprimir_evaluacion(self, puntuacion):

        """
        Muestra las alergias que tiene el usuario segun su puntuacion

        """


        print(f"Puntuación de alergia: {puntuacion}")
        evaluacion = self.evaluar_alergias(puntuacion)
        if evaluacion:
            print("Alergias detectadas:")
            for alergia in evaluacion:
                print(alergia)
        else:
            print("No se detectaron alergias.")