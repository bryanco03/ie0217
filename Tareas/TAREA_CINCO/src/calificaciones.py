import numpy as np


"""
Programa que agarra las calificaciones de 5 estudiantes en 5 materias y por la biblioteca numpy se calcula el promedio, la calificacion  mas alta y la suma de calificaciones por materia

"""




# se crea un array de la biblioteca numpy con las calificaciones de los estudiantes
calificaciones = np.array([
    [78, 93, 82, 72, 95],  # estudintes 1
    [73, 62, 90, 85, 74],  # estudintes 2
    [85, 100, 93, 93, 84],  # estudintes 3
    [72, 94, 90, 89, 83],  # estudintes 4
    [80, 65, 74, 95, 85]   # estudintes 5
])


# Imprimir el conjunto de datos de calificaciones
print("Calificaciones:\n", calificaciones)

# se calcula el promedio de calificaciones por estudiante y por materia
promedio_por_estudiante = np.mean(calificaciones, axis=1)
promedio_por_asignatura = np.mean(calificaciones, axis=0)

# Encontrar la calificación máxima obtenida por cada estudiante
maxima_por_estudiante = np.max(calificaciones, axis=1)

# Calcular la suma total de calificaciones por asignatura
suma_por_asignatura = np.sum(calificaciones, axis=0)

# Imprimir los resultados
print("Promedio por estudiante:", promedio_por_estudiante)
print("Promedio por asignatura:", promedio_por_asignatura)
print("Máxima por estudiante:", maxima_por_estudiante)
print("Suma por asignatura:", suma_por_asignatura)

