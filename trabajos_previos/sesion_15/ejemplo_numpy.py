import matplotlib.pyplot as plt
import numpy as np 

# generar datos
x =  np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# crear grafico de lineas con dos series
plt.plot(x, y1, label="Seno")
plt.plot(x, y2, label="Coseno")

# Personalizar
plt.xlabel("Angulo(rad)")
plt.ylabel("Valor")
plt.title("Funciones Seno y Coseno")
plt.legend()

# Mostrar el grafico 
plt.show()