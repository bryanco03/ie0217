# Crear una clase
class Bike:
    name = ""
    gear = 0

# crear un objeto de la clase
bike1 = Bike()

# accediendo a los atributos y asignando nuevos valores
bike1.gear = 11
bike1.name = "Mountain Bike"

print(f"Name: {bike1.name}, Gears: {bike1.gear}")