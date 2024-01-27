class EvaluacionEspecifica:
    def __init__(self, alergias):
        self.alergias = alergias

    def evaluar_alergias(self, puntuacion):
        alergias_evaluadas = []
        for alergia in self.alergias:
            if puntuacion & alergia.valor:
                alergias_evaluadas.append(alergia)
        return alergias_evaluadas

    def imprimir_evaluacion(self, puntuacion):
        print(f"Puntuación de alergia: {puntuacion}")
        evaluacion = self.evaluar_alergias(puntuacion)
        if evaluacion:
            print("Alergias detectadas:")
            for alergia in evaluacion:
                print(alergia)
        else:
            print("No se detectaron alergias.")