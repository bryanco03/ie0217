class EvaluacionGeneral:

    """
    Clase EvauluacionGeneral: le indica al usuario su puntuacion segun las alergias que ingreso
    
    """



    def __init__(self, tipos_de_alergias):


        """
        Inicializa una instacia de EvauluacionGeneral
        
        """


        self.tipos_de_alergias = tipos_de_alergias

    def calcular_puntuacion_general(self, alergias_evaluadas):
        

        """
        Calcula la puntuacion de alergias del usuario segun las alergias que habia ingresado con anterioridad

        Parámetro
        - alergias_evaluadadas: lista con las alergias que ingresó el usuario

        
        Retona
        _ puntuacion del usuario
        
        """

        puntuacion_general = sum(alergia.valor for alergia in alergias_evaluadas)
        return puntuacion_general

    def imprimir_resultados(self, alergias_evaluadas, puntuacion_general, alergias_sin_nombre,alergias_sin_valor):
        
        """"
        Muestra  los resultados obtenidos en calcular_puntuacion_general(), asi como las alergias que se desconocen su nombre o valor
        
        """
        
        
        print(f"Puntuación general de alergias: {puntuacion_general}")


        print("--Alergias Desconocidas--")

        if alergias_sin_valor:
            print("Alergias sin nombre:")
            for alergia in alergias_sin_nombre:
                print(f"Alergia: ----- , Valor: {alergia}")

        if alergias_sin_nombre:
            print("Alergias con puntuación pero sin nombre:")
            for alergia in alergias_sin_valor:
                print(f"Alergia: {alergia} , Valor: -----")

        # Calcular promedio de alergias y valores desconocidos
            
        total_alergias = len(alergias_evaluadas)
        total_desconocidos = len(alergias_sin_valor) + len(alergias_sin_nombre)
        promedio_alergias = len(alergias_evaluadas) / (total_alergias + total_desconocidos)
        promedio_desconocidos = total_desconocidos / (total_alergias + total_desconocidos)

        print(f"Promedio de Alergias: {promedio_alergias:.2f}")
        print(f"Promedio de Desconocidos: {promedio_desconocidos:.2f}")

