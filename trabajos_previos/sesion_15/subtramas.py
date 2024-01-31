import matplotlib.pyplot as plt

# datos 
x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9,  6, 10]

# crear subtramas 
fig, axs = plt.subplots(1, 2) # fila 1, columna

# grafico en la primera subtrama
axs[0].plot(x, y1, label="Serie A")
axs[0].set_title("SubTrama 1")

# grafico en la segunda subtrama
axs[1].plot(x, y2, label="Serie B", color="red")
axs[1].set_title("SubTrama 2")

# personalizacion adicional
for ax in axs:
    ax.set_xlabel("Eje x")
    ax.set_ylabel("Eje Y")
    ax.legend()

# ajustar disposicion
plt.tight_layout()

# Mostrar graficos
plt.show()