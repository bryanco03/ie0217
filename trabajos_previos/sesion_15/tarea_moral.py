import matplotlib.pyplot as plt
import numpy as np

# Datos
categorias= ["A", "B", "C", "D"]
valores1 = [15, 8 , 12, 10]
valores2= [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# crear figura
fig, ax = plt.subplots()

# Ancho de barras
ancho_barras = 0.35
indice = np.arange(len(categorias))

# Graficos de barras agrupadas

# grafico de barras 1 
bar1 = ax.bar(indice - ancho_barras / 2, valores1, ancho_barras, label="Serie1",
            color="royalblue")
# grafico de barras 2
bar2 = ax.bar(indice - ancho_barras / 2, valores2, ancho_barras, label="Serie2",
            color="lightcoral")

#  Linea de tendencia
ax.plot(indice, tendencia, label="Tendencia", marker="o", color="green")


# Personalizar titulos de los ejes y su separacion
ax.set_xlabel("Categorias")
ax.set_ylabel("Valores")
ax.set_title("Grafico de barras agrupadas con tendencia")
ax.set_xticks(indice)
ax.set_xticklabels(categorias)
ax.legend()

# añadir etiquetas en las barras
for bar in [bar1, bar2]:
    for rect in bar:
        height = rect.get_height()
        ax.annotate("{}".format(height),
                    xy=(rect.get_x() + rect.get_width() / 2 , height),
                    xytext= (0,3), # desplazamiento vertical de la etiqueta
                    textcoords="offset points",
                    ha="center", va="bottom")
# mostrar grafico
plt.grid(axis="y", linestyle="--", alpha=0.7)
plt.tight_layout()
plt.show()





