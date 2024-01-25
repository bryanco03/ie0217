
squares = {1:1, 3:9, 5:25, 7:49, 9: 81}

# Salida true
print(1 in squares)

print(2 not in squares)

# salida false
print(49 in squares)

#Iterar sobre diccionario
for i in squares:
    print(squares[i])