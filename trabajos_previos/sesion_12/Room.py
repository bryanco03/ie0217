# Crear clase
class Room:
    length = 0.0
    breadth = 0.0

    # metodo para calcular el area
    def calculate_area(self):
        print("Area del Cuarto =", self.length * self.breadth)

# Crear un objeto con la clase Room
study_room = Room()

# asignar valores a los atributos
study_room.length = 3
study_room.breadth = 2.5

# acceder al metodo
study_room.calculate_area()