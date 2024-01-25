class Animal:
    # Atributos y metoodos de la clase padre

    name = ""

    def eat(self):
        print("I can eat")

class Dog(Animal):

    # nuevo metodo en la sub clase

    def display(self):
        # accedieno a los atributos de la clase padre
        print("My name is", self.name)

# crear un objeto de la subclase
labrador = Dog()

# accediendo a los atributos y metodos de la clase padre
labrador.name = "Rohu"
labrador.eat()

# llamar al metodo de la sub clase
labrador.display()
