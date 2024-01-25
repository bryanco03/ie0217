def factorial(x):
    """ Esta es una funcion recursiva para
    encontrar el factorial de un numero"""

    if x == 1:
        return 1
    else:
        return (x * factorial(x-1))
    

num = 3
print("El factorial de", num, "Es:", factorial(num))