# Programa para mostrar el reciproco de un numero par

try:
    num = int(input("Ingrese un numero: "))
    assert num % 2 == 0
except:
    print("No es un numero par")
else:
    reciprocal = 1/num
    print(reciprocal)
