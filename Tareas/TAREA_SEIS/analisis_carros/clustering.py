import matplotlib.pyplot as plt
from sklearn.cluster import KMeans, DBSCAN
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA
from sklearn.metrics import silhouette_score
from datos import cargar_datos

# Carga los datos desde un archivo CSV utilizando la función cargar_datos
df = cargar_datos('data\CAR DETAILS FROM CAR DEKHO.csv')

def codo(df):
    """
    Función que calcula la inercia para diferentes valores de k en KMeans
    y grafica el codo para ayudar a determinar el número óptimo de clusters.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    # Prepara los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
    
    # Calcula las inercias para diferentes valores de k
    inertias = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(X)
        inertias.append(kmeans.inertia_)

    print("Se elige k = 4 como el numero optimo de clusters")
    # Grafica el método del codo
    plt.plot(range(1, 11), inertias, marker="o")
    plt.title("Metodo del codo")
    plt.xlabel("Numero de clusters k")
    plt.ylabel("Inercia")
    plt.show()

def silueta(df):
    """
    Función que calcula el coeficiente de silueta para diferentes valores de k en KMeans
    y grafica el método de la silueta para ayudar a determinar el número óptimo de clusters.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    # Prepara los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
    
    # Calcula el coeficiente de silueta para diferentes valores de k
    silhouette_scores = []
    for k in range(2, 20):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(X)
        score = silhouette_score(X, kmeans.labels_)
        silhouette_scores.append(score)

    # Grafica el método de la silueta
    plt.plot(range(2, 20), silhouette_scores, marker="o")
    plt.title("Método de la silueta")
    plt.xlabel("Numero de clusters k")
    plt.ylabel("Coeficiente de silueta")
    plt.show()

def clustering_kmeans(df):
    """
    Función que realiza el clustering con KMeans y grafica los resultados.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    X = df[['selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
    
    # Subgráficos
    plt.figure(figsize=(12,5))

    # Subgráfico 1: Visualizar los puntos de los datos
    plt.subplot(1, 2, 1)
    plt.scatter(X[: , 0], X[:, 1], c="blue", marker="o")
    plt.title("Kilometraje vs Precio de venta")
    plt.xlabel("Precio de venta")

    # Configuración de KMeans con un número específico de clusters
    kmeans = KMeans(n_clusters=4)
    # Ajuste
    kmeans.fit(X)
    # Etiquetas de los clusters y coordenadas de los centroides
    labels = kmeans.labels_
    centroids = kmeans.cluster_centers_

    # Subgráfico 2: Clusters con KMeans
    plt.subplot(1, 2, 2)
    for i in range(len(X)):
        plt.scatter(X[i][0], X[i][1],
                    c=("r" if labels[i] == 0 else "b" if labels[i] == 1 else "g"),
                    marker="o")
    plt.scatter(centroids[:, 0], centroids[:, 1], c="black", marker="X", s=200,
                label="centroid")
    plt.title("Resultados del clustering con K-means")
    plt.xlabel("Precio de venta")
    plt.ylabel("Kilometraje")
    plt.legend()

    # Ajustar diseño
    plt.tight_layout()

    # Mostrar subgráficos
    plt.show()

def clustering_DBSCAN(df):
    """
    Función que realiza el clustering con DBSCAN y grafica los resultados.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    X = df[['selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)

    # Configura y ajusta el modelo DBSCAN
    dbscan = DBSCAN(eps=0.3, min_samples=5)
    dbscan_labels = dbscan.fit_predict(X)

    # Ver resultados
    plt.scatter(X[:, 0], X[:, 1], c=dbscan_labels, cmap="viridis", edgecolor="k", s=50)
    plt.title("Resultado del Clustering DBSCAN")
    plt.xlabel("Precio de venta")
    plt.xlabel("Kilometraje")
    plt.show()

def clustering(df):
    """
    Función que realiza el clustering con KMeans, reduce la dimensionalidad con PCA
    y visualiza los clusters en 2D.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    # Preparar los datos
    X = df[['year', 'selling_price', 'km_driven']]
    X = StandardScaler().fit_transform(X)
    
    # Aplicar KMeans con el número óptimo de clusters
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
    plt.title('Clusters de vehículos usando PCA')
    plt.colorbar(label='Cluster')
    plt.show()

def clustering_kmeans_3d(df):
    """
    Función que realiza el clustering con KMeans y grafica los resultados en 3D.
    
    Args:
    - df: DataFrame que contiene los datos a ser utilizados para el clustering.
    """
    X = df[['year', 'km_driven', 'selling_price']]
    
    # Realizar el clustering con KMeans
    kmeans = KMeans(n_clusters=4)
    kmeans.fit(X)
    df['cluster'] = kmeans.labels_

    # Colores para cada clúster
    colors = ['r', 'g', 'b', 'y']

    # Crear un gráfico 3D
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # Graficar los puntos coloreados por clúster
    for i in range(4):
        cluster_points = df[df['cluster'] == i]
        ax.scatter(cluster_points['year'], cluster_points['km_driven'], cluster_points['selling_price'], c=colors[i], label=f'Cluster {i}')

    # Configurar etiquetas y título
    ax.set_xlabel('Año')
    ax.set_ylabel('Kilometraje')
    ax.set_zlabel('Precio de venta')
    ax.set_title('Clustering con KMeans en 3D')
    ax.legend()

    # Mostrar el gráfico
    plt.show()
