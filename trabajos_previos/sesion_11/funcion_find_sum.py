
# Programa para encontrar la suma de multiples numeros

def find_sum(*numbers):
    result = 0

    for num in numbers:
        result =  result + num

    print("sum =",result)

# Llamando la funcion con 3 argumentos
find_sum(1,2,3)

# Llamando la funcion con 2 argumentos
find_sum(4,9)