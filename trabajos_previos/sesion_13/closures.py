def greet(name):
    # funcion anidada
    def display_name():
        print("HI",name)

    display_name()

# llamar la funcion de afuera
greet("John")

# Con lambda

def greet():
    # variable definida afuera de la funcion anidada
    name = "john"

    return lambda: "Hi "+ name

# llamar la funcion de afuera
message=greet()

print(message())