languages = ["Python", "Swift", "C++", "C", "Java", "Rust", "R"]

# eliminando el segundo elemento
del languages[1]
print(languages)

# eliminado el ultimo elemento
del languages[-1]
print(languages)

# eliminando los dos primeros elementos
del languages[0:2]
print(languages)


languages = ["Python", "Swift", "C++", "C", "Java", "Rust", "R"]

# eliminar "Python" de la lista
languages.remove("Python")

print(languages)