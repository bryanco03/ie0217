from sklearn.cluster import KMeans
import numpy as np 
import matplotlib.pyplot as plt


# generar datos
np.random.seed(42) # para reproducibilidad 

# 100 puntos en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# se calculan inercias para diferentes k
inertias = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    inertias.append(kmeans.inertia_)

# graficar codo

plt.plot(range(1, 11), inertias, marker="o")
plt.title("Metodo del codo")
plt.xlabel("Numero de clusters k")
plt.ylabel("Inercia")
plt.show()