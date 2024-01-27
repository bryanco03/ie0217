class TiposDeAlergias:
    def __init__(self):
        self.alergias = []

    def agregar_alergia(self, alergia):
        self.alergias.append(alergia)

    def obtener_alergias(self):
        return self.alergias

    def buscar_alergia_por_valor(self, valor):
        for alergia in self.alergias:
            if alergia.valor == valor:
                return alergia.nombre
        return None

    def buscar_valor_por_alergia(self, nombre):
        for alergia in self.alergias:
            if alergia.nombre.lower() == nombre.lower():
                return alergia.valor
        return None
