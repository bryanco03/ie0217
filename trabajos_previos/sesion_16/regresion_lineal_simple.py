import numpy as np
import matplotlib.pyplot as plt
from sklearn. linear_model import LinearRegression

# generar datos
np.random.seed(42)
X=2 * np.random.rand(100,1)
y=4+3*X +np.random.randn(100,1)

# crear regresion lineal
modelo = LinearRegression()

# se ajusta el modelo
modelo.fit(X, y)

# mostrar coeficiente e intercepcion
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepción:", modelo.intercept_[0])

# graficar la regresion lineal
plt.scatter(X,y)
plt.plot(X, modelo.predict(X), color="red", linewidth=3)
plt.title("Regresión Lineal")
plt.xlabel("x")
plt.ylabel("y")
plt.show()