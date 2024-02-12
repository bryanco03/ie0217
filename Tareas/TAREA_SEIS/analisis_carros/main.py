from datos import cargar_datos, limpiar_datos
from regresion import regresion_lineal, regresion_lineal2, regresion_no_lineal, regresion_no_lineal2, regresion_lineal_3d, regresion_no_lineal_3d
import matplotlib.pyplot as plt
from clustering import codo, silueta, clustering_kmeans, clustering_DBSCAN, clustering_kmeans_3d
data = cargar_datos('CAR DETAILS FROM CAR DEKHO.csv')
data = limpiar_datos(data)


regresion_lineal(data)
regresion_lineal2(data)


regresion_no_lineal(data, 10)
regresion_no_lineal2(data, 10)


regresion_lineal_3d(data)
regresion_no_lineal_3d(data)



codo(data)
silueta(data)
clustering_kmeans(data)
clustering_DBSCAN(data)
clustering_kmeans_3d(data)