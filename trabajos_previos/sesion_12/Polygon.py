class Polygon:
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in  range(no_of_sides)]

    def inputSides(self):
        self.sides =[float(input("Enter Side"+str(i+1)+" : ")) for i in range(self.n)]

    def dispSides(self):
            for i in range(self.n):
                print("Side", i+1, "is",self.sides[i])

class Triangle(Polygon):
    def __init__(self):
        Polygon.__init__(self,3)
    
    def findArea(self):
        a, b , c = self.sides
        # Calcular el area del semi perimetro
        s = (a + b + c)/ 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print("The area of the Triangule is %0.2f" %area)


# creando una instancia de la clase triangulo
t = Triangle()

# preguntar por los lados del triangulo
t.inputSides()

#mostrar los lados del triangulo
t.dispSides()

# Calcular y mostrar area del triangulo
t.findArea()

