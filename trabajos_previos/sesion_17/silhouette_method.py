from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import numpy as np 
import matplotlib.pyplot as plt


# generar datos
np.random.seed(42) # para reproducibilidad 

# 100 puntos en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# calular coeficiente de silueta para diferentes k
silhouette_scores = []
for k in range(2, 20):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    score = silhouette_score(X, kmeans.labels_)
    silhouette_scores.append(score)

# graficar metodo de la silueta
plt.plot(range(2, 20), silhouette_scores, marker="o")
plt.title("Método de la silueta")
plt.xlabel("Numero de clusters k")
plt.ylabel("Coeficiente de silueta")
plt.show()

