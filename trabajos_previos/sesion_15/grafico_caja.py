import matplotlib.pyplot as plt

# datos 
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# grafico de caja
plt.boxplot(datos)

# personalizar
plt.ylabel("Valores")
plt.title("grafico de caja")

# mostrar el grafico
plt.show()