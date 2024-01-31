import matplotlib.pyplot as plt

# datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5,8, 14]

# crear un grafico de linea
plt.plot(x, y)

# Personalizar
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.title("Grafico de Linea simple")

# Guardar grafico como imagen 
plt.savefig("grafico.png")

#mostrar grafico
plt.show()