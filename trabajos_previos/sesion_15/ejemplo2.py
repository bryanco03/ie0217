import matplotlib.pyplot as plt

# datos
categorias = ["A", "B", "C", "D"]
valores = [15, 8, 12, 10]
tendencia = [5,  10, 8, 13]

# crear figura con dos subtramas
fig, axs = plt.subplots(1, 2, figsize=(10,4))

# Subtrama 1 grafico de barras
axs[0].bar(categorias, valores, color="royalblue")
axs[0].set_title("Grafico de barras")

# subtrama grafico de linea
axs[1].plot(categorias, tendencia, color="green", marker="o")
axs[1].set_title("Grafico de Linea")

# Personalizacion 
for ax in axs:
    ax.set_xlabel("Categorias")
    ax.set_ylabel("Valores")

# ajustar disposicion
plt.tight_layout()

# mostar graficos
plt.show()