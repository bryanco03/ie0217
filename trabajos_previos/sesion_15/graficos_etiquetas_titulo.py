import matplotlib.pyplot as plt

# datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5,8, 14]

# crear un grafico de linea
plt.plot(x, y, label="datos de ejemplo")

# Personalizar
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.title("Grafico de Linea con etiquetas y titulo")
plt.legend()

#mostrar grafico
plt.show()