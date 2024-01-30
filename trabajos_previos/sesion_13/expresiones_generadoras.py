# crear el generador

squares_generators = (i*i for i in range(5))

# iterar sobre el generador y mostrar valores
for i in squares_generators:
    print(i)