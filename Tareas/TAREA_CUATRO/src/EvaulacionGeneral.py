class EvaluacionGeneral:
    def __init__(self, tipos_de_alergias):
        self.tipos_de_alergias = tipos_de_alergias

    def calcular_puntuacion_general(self, alergias_evaluadas):
        puntuacion_general = sum(alergia.valor for alergia in alergias_evaluadas)
        return puntuacion_general

    def imprimir_resultados(self, alergias_evaluadas, puntuacion_general):
        print(f"Puntuación general de alergias: {puntuacion_general}")

        alergias_sin_nombre = [alergia for alergia in alergias_evaluadas if not self.tipos_de_alergias.buscar_alergia_por_valor(alergia.valor)]
        if alergias_sin_nombre:
            print("Alergias sin nombre:")
            for alergia in alergias_sin_nombre:
                print(f"Valor: {alergia.valor}")

        valores_sin_nombre = [alergia.valor for alergia in alergias_evaluadas if not self.tipos_de_alergias.buscar_alergia_por_valor(alergia.valor)]
        if valores_sin_nombre:
            print("Valores sin nombre:")
            for valor in valores_sin_nombre:
                print(f"Valor: {valor}")

        alergias_con_puntuacion_sin_nombre = [alergia.nombre for alergia in alergias_evaluadas if not self.tipos_de_alergias.buscar_alergia_por_valor(alergia.valor) and alergia.nombre]
        if alergias_con_puntuacion_sin_nombre:
            print("Alergias con puntuación pero sin nombre:")
            for alergia in alergias_con_puntuacion_sin_nombre:
                print(f"Alergia: {alergia}")
