import numpy as np

# Crear un array de NumPy con las calificaciones de los estudiantes
calificaciones = np.array([
    [90, 85, 88, 92, 95],  # Calificaciones del estudiante 1 en 5 asignaturas
    [78, 82, 80, 85, 88],  # Calificaciones del estudiante 2 en 5 asignaturas
    [85, 90, 92, 88, 86],  # Calificaciones del estudiante 3 en 5 asignaturas
    [92, 94, 90, 85, 88],  # Calificaciones del estudiante 4 en 5 asignaturas
    [80, 75, 78, 82, 85]   # Calificaciones del estudiante 5 en 5 asignaturas
])

# Calcular el promedio de calificaciones por estudiante y por asignatura
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

# Imprimir el conjunto de datos de calificaciones
print("Calificaciones:\n", calificaciones)
