class Polygon:
    # metodo para renderizar una figura
    def render(self):
        print("Rendering Polygon")

class Square(Polygon):
    # metodo para renderizar un cuadrado
    def render(self):
        print("Rendering Square")

class Circle(Polygon):
    # metodo para renderizar un circulo
    def render(self):
        print("Rendering Circle")

# Crear un objeto de square
s1 = Square()
s1.render()

# Crear un objeto de circle
s2 = Circle()
s2.render()