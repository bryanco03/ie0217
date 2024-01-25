def greet():
    # Variable local
    message = "Hello"

    print("Local",message)

greet()

# si se intenta acceder a message afuera de la funcion se produce un error
# print(message)