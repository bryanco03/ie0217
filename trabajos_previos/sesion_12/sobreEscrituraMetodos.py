class Animal:
    # Atributos y metoodos de la clase padre

    name = ""

    def eat(self):
        print("I can eat")

class Dog(Animal):

    # Sobre escribir metodo eat heredado de Animal
    def eat(self):
        # Llamar al metodo de la clase padre
        super().eat()

        print("I liKe eat bones")

# crear un objeto de la subclase
labrador = Dog()
labrador.eat()


