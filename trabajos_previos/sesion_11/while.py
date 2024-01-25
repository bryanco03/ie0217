
# Se muestran de 1 a 5

# Se inicializa las variables
i = 1
n = 5

# while loop de i = 1 a 5
while i <= n:
    print(i)
    i = i + 1

# programa para calcular la suma de los numeros ingresados por el usuario hasta que ingrese un cero

total = 0
number = int(input("Ingrese un numero: "))

# Suma los numeros hasta que son cero
while number != 0:
    total += number
    number = int(input("Ingrese un numero: "))
print("Total=",total)


# Else en while loop
counter = 0
while counter < 3:
    print("Adentro del loop")
    counter = counter + 1
else:
    print("Afuera del loop")


age = 32
while (age > 18):
    print("LA edad es mayor a 18")
    age = age - 1