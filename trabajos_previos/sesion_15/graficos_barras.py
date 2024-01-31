import matplotlib.pyplot as plt

# datos 
categorias = ["A", "B", "C", "D"]
valores = [15, 8, 12, 10]

# grafico de barras verticales
plt.bar(categorias, valores, color="royalblue")

# personalizar 
plt.xlabel("Categorias")
plt.ylabel("Valores")
plt.title("Grafico de barras Verticales")

# mostrar el grafico
plt.show()