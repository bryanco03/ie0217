def my_generator(n):

    # inicializar un contador
    value = 0

    # loop hasta que el contador es menor que n
    while value <n:

        # produce el actual valor del contador
        yield value

        # Incrementar el contador 
        value +=1

# iterar sobre el generador
for value in my_generator(3):
    print(value)