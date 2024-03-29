import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import requests
import os


# Cargar datos
# Obtener datos de https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv
# y almacenarlos en data/dataset.csv

url = 'https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv'

# se realiza la solicitud 
response = requests.get(url)

directorio = 'data'

#Verificar si el directorio existe
if not os.path.exists(directorio):
    # Crear el directorio si no existe
    os.mkdir(directorio)



# Verificar si la solicitud fue exitosa 200
if response.status_code == 200:
    # Leer el contenido del request como texto
    csv_text = response.text
    # Crear un objeto de escritura para el archivo CSV local
    with open('data/dataset.csv', 'w', newline='', encoding='utf-8') as file:
        # escribir el archivo CSV desde el texto obtenido con el request 
        file.write(csv_text)
else:
    print(f'Error al obtener el archivo CSV: {response.status_code} - {response.reason}')




data = pd.read_csv("data/dataset.csv")

# -----------
#     1
# -----------

X_simple = data['median_income'].values.reshape(-1, 1)
y_simple = data['median_house_value'].values


X_train, X_test, y_train, y_test = train_test_split(X_simple, y_simple, test_size=0.2, random_state=42)


model_simple = LinearRegression()
model_simple.fit(X_train, y_train)


y_pred_simple = model_simple.predict(X_test)


mse_simple = mean_squared_error(y_test, y_pred_simple)
print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

# -----------
#     2
# -----------

X_multiple = data[['median_income', 'housing_median_age', 'population']]
y_multiple = data['median_house_value'].values


X_train_multi, X_test_multi, y_train_multi, y_test_multi = train_test_split(X_multiple, y_multiple, test_size=0.2, random_state=42)


model_multiple = LinearRegression()
model_multiple.fit(X_train_multi, y_train_multi)


y_pred_multiple = model_multiple.predict(X_test_multi)


mse_multiple = mean_squared_error(y_test_multi, y_pred_multiple)
print(f"Error cuadrático medio (MSE) en regresión lineal múltiple: {mse_multiple}")

# -----------
#     3
# -----------
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

# Obtener los valores de la columna housing_median_age (matriz de una columna)
X_nonlinear = data['housing_median_age'].values.reshape(-1, 1) 
#Obtener los valores de la columna median_house_value
y_nonlinear = data['median_house_value'].values 

# se divide el cojunto de datos en train y en test, 20% es test y el resto son de train (random test = 42 es para generar siempre los mismos numeros)
X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)

# Grado del modelo regresion no lineal
degree = 2
# crear modelo de regresion no lineal con los datos de train
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
# ajustar el modelo de regresion no lineal
model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)

# predecir los datos ( prueba el modelo con los datos tests)
y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)

# Calcular el error cuadratico medio entre las prediciones y valores reales
mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
# Mostrar el error cuadratico medio resultante
print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

# -----------
#     4
# -----------
from sklearn.linear_model import Ridge, Lasso


model_ridge = Ridge(alpha=1.0)
model_ridge.fit(X_train_multi, y_train_multi)


model_lasso = Lasso(alpha=1.0)
model_lasso.fit(X_train_multi, y_train_multi)

# -----------
#     5
# -----------
from sklearn.cluster import KMeans, DBSCAN
import matplotlib.pyplot as plt


X_cluster = data[['longitude', 'latitude']]


kmeans = KMeans(n_clusters=3, random_state=42, n_init=10)
data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)


dbscan = DBSCAN(eps=0.5, min_samples=5)
data['cluster_dbscan'] = dbscan.fit_predict(X_cluster)


plt.scatter(data['longitude'], data['latitude'], c=data['cluster_kmeans'], cmap='viridis', marker='.')
plt.title('Clusters usando K-means')
plt.show()

plt.scatter(data['longitude'], data['latitude'], c=data['cluster_dbscan'], cmap='viridis', marker='.')
plt.title('Clusters usando DBSCAN')
plt.show()
