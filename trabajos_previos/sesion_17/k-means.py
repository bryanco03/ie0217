from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# generar datos
np.random.seed(42) # para reproducibilidad 

# 100 puntos en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# subgraficos
plt.figure(figsize=(12,5))

# subgrafico 1 visualizar de puntos de los datos
plt.subplot(1, 2, 1)
plt.scatter(X[: , 0], X[:, 1], c="blue", marker="o")
plt.title("Puntos de datos aleatorios")
plt.xlabel("Caracteristica 1")
plt.ylabel("Caracteristica 2")

# Configuracion de k-means en un numero de clusters k especifico
kmeans = KMeans(n_clusters=3)
# ajustar
kmeans.fit(X)
# etiquetas de los clusters y coordenadad de centroides
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# sub grafico 2 clusters con kmeans
plt.subplot(1, 2, 2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1],
                c=("r" if labels[i ]== 0 else "b" if labels[i] == 1 else "g"),
                marker="o")
plt.scatter(centroids[:, 0], centroids[:, 1], c="black", marker="X", s=200,
            label="centroid")
plt.title("Resultados del clustering con K-means")
plt.xlabel("Caracteristica 1")
plt.ylabel("Caracteristica 2")
plt.legend()

# ajustar diseño
plt.tight_layout()

# mostrar subgraficos
plt.show()


