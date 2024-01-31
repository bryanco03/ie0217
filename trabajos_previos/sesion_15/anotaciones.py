import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5,8, 14]

# crear un grafico de linea
plt.plot(x, y, label="Datos de ejemplo")

# añadir una anotacion
plt.annotate("Valor maximo", xy=(5,14), xytext=(3,16),
            arrowprops=dict(facecolor="black", shrink=0.05),)

# Personalizar
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.title("Grafico con anotacion")
plt.legend()

#mostrar grafico
plt.show()