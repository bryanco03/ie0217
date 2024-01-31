import matplotlib.pyplot as plt

# Datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5,8, 14]

# crear un grafico de linea
plt.plot(x, y, color="blue", linestyle="--", marker="o", label="Serie A")

# Personalizar
plt.xlabel("Eje X")
plt.ylabel("Eje Y")
plt.title("Grafico Personalizado")
plt.legend()

#mostrar grafico
plt.show()