import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA
from sklearn.metrics import silhouette_score
from yellowbrick.cluster import KElbowVisualizer
from datos import cargar_datos
from sklearn.cluster import DBSCAN
from mpl_toolkits.mplot3d import Axes3D

df = cargar_datos('data\CAR DETAILS FROM CAR DEKHO.csv')



def codo(df):
    # Preparar los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
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

def silueta(df):
    # Preparar los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
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


def clustering_kmeans(df):
    
    X = df[['selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
    # subgraficos
    plt.figure(figsize=(12,5))

    # subgrafico 1 visualizar de puntos de los datos
    plt.subplot(1, 2, 1)
    plt.scatter(X[: , 0], X[:, 1], c="blue", marker="o")
    plt.title("Kilometraje vs Precio de venta")
    plt.title("Resultados del clustering con K-means")
    plt.xlabel("Precio de venta")

    # Configuracion de k-means en un numero de clusters k especifico
    kmeans = KMeans(n_clusters=4)
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
    plt.xlabel("Precio de venta")
    plt.ylabel("Kilometraje")
    plt.legend()

    # ajustar diseño
    plt.tight_layout()

    # mostrar subgraficos
    plt.show()

def clustering_DBSCAN(df):

    X = df[['selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)


    # Configura  y  sea justa el modelo DBSCAN
    dbscan = DBSCAN(eps=0.3, min_samples=5)
    dbscan_labels = dbscan.fit_predict(X)

    # ver resultados
    plt.scatter(X[:, 0], X[:, 1], c=dbscan_labels, cmap="viridis", edgecolor="k", s=50)
    plt.title("Resultado del Clustering DBSCAN")
    plt.title("Resultados del clustering con K-means")
    plt.xlabel("Precio de venta")
    plt. show()




def clustering(df):

    # Preparar los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
        # Aplicar K-Means con el número óptimo de clusters
    kmeans = KMeans(n_clusters=4)
    kmeans.fit(X)
    cluster_labels = kmeans.labels_
    
    # Visualizar los clusters en 2D usando PCA para reducir la dimensionalidad
    pca = PCA(n_components=3)
    X_pca = pca.fit_transform(X)
    
    plt.figure(figsize=(10, 6))
    plt.scatter(X_pca[:, 0], X_pca[:, 1], c=cluster_labels, cmap='viridis')
    plt.xlabel('Componente principal 1')
    plt.ylabel('Componente principal 2')
    plt.title('Clusters de vehículos')
    plt.colorbar(label='Cluster')
    plt.show()

def clustering_kmeans_3d(df):
    

    X = df[['year', 'km_driven']]
    z_price = df['selling_price']


    # Realiza el clustering con KMeans
    kmeans = KMeans(n_clusters=4)
    kmeans.fit(X)
    labels = kmeans.labels_

    # Crea un gráfico 3D
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # Grafica los puntos coloreados por clúster
    scatter = ax.scatter(X['year'], X['km_driven'], z_price, c=labels)

    # Agrega leyenda
    legend1 = ax.legend(*scatter.legend_elements(), title='Clusters')
    ax.add_artist(legend1)

    # Configura etiquetas y título
    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.set_zlabel('Z')
    ax.set_title('Clustering con KMeans en 3D')

    # Muestra el gráfico
    plt.show()

clustering_kmeans_3d(df)