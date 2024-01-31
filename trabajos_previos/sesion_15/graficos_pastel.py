import matplotlib.pyplot as plt

# datos
propociones = [30, 20, 25, 15]
etiquetas = ["A", "B", "C", "D"]

# grafico de pastel 
plt.pie(propociones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Personalizacion
plt.title("grafico de pastel")

# mostrar el grafico
plt.show()
