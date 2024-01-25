# Programa para encontrar los primeros 5 multiplos de 6
i = 1

while i <= 10:
    print("6*", i, "=", 6*i)
    if i >=5:
        break

    i = i + 1

# Programa para imprimir los numeros imparesn del 1 a 10
    
num = 0
while num < 10:
    num +=1
    if (num % 2) == 0:
        continue
    print(num)
