from sklearn.preprocessing import StandardScaler
import pandas as pd 
import matplotlib.pyplot as plt 
from sklearn.cluster import KMeans 

# datos
data = pd.read_csv("data.csv")

# explorar datos
print(data.head())

# preprocesamiento (escalamiento de caracteriticas)
scaler = StandardScaler()
scaled_data = scaler.fit_transform(data)

# metodo Codo
inertia = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(scaled_data)
    inertia.append(kmeans.inertia_)

# Graficar  metodo del Codo
plt.plot(range(1, 11), inertia, marker='o')
plt.title("Método del Codo para Selección de k")
plt.xlabel("Número de Clusters (k)")
plt.ylabel("Inercia")
plt. show()

# Se asume que número optimo de clusters k = 4 segun el metodo del codo
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)

# Agregamos las etiquetas de cluster al conjunto de datos original
data["Cluster"] = cluster_labels

# Análisis de segmentos
segment_analysis = data.groupby("Cluster").mean()

# ver de segmentos
plt.figure(figsize=(12, 6))
for cluster in range(4):
    plt.scatter(data[data["Cluster"] == cluster]["Frequency"],
                data[data["Cluster"] == cluster]["Avg_Spend"],
                label=f"Cluster {cluster}")
plt.title("Segmentación de Clientes por Frecuencia y Gasto Promedio")
plt.xlabel("Frecuencia de Visita")
plt.ylabel("Gasto Promedio")
plt. legend()
plt. show()