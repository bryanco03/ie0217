
# se abre el archivo
file1 = open("test.txt","r")

# se lee el archivo
read_content = file1.read()
print(read_content)

# cerrar el archivo
file1.close()