class Person:
    # Constructor, se asigna valores a los atriutos
    def __init__(self, name, age) :
        self.name = name
        self.age = age

    # mostrar informacion de la persona
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")