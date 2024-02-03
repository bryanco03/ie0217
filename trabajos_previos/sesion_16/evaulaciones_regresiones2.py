import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

# Generar datos 
np.random.seed(42)
X=2 * np.random.rand(100, 1)
y=4+3 *X+np.random.randn(100, 1)

#  se divide los datos en entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(
X, y, test_size=0.2, random_state=42)

# se crea y ajusta modelo de regresion lineal multiple
modelo = LinearRegression()
modelo.fit(X_train, y_train)

#  se realizan predicciones con los datos de prueba
y_pred = modelo.predict(X_test)

# se calcula el coeficiente de determinación R^2
r2 = r2_score(y_test, y_pred)

# Visualizar los resultados
plt.scatter(X_test, y_test, label="Datos de prueba", color="blue")
plt.plot(X_test, y_pred, label=f"Regresion Lineal (R^2={r2 : 2f})",
color="red")
plt.title("Regresión Lineal y Coeficiente de Determinación R^2")
plt.xlabel("x")
plt.ylabel("y")
plt. legend()
plt. show()