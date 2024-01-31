import os

# obtener el path en el que esta
print(os.getcwd())

# crer directorio
os.mkdir("test")

#lista de directorios
print(os.listdir())

#cambiar directorio
os.chdir("test")
os.chdir("..")

#eliminar directorio
os.rmdir("test")



# eliminar archivo
os.remove("myfile.txt")
