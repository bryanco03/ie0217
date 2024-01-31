import pandas as pd 

# Se lee el archivo csv
ejemplo = pd.read_csv("ejemplo.csv")

print(ejemplo)

# obtener solo 2 filas
print(ejemplo.head(2))

# mostrar los tipos de datos del dataframe
print(ejemplo.dtypes)


edad = ejemplo["edad"]
print(edad.head())

# mostrar tipo
print(type(ejemplo["edad"]))

# mostrar dimension
print(ejemplo["edad"].shape)

# obtener un dataframe de ejemplo
edad_nombre = ejemplo[["edad", "nombre"]]

# mostrar dataframe

print(edad_nombre.head())

# mostrar tipo
print(type(ejemplo[["edad", "nombre"]]))

# mostrar dimension
print(ejemplo[["edad", "nombre"]].shape)


# pasar a excel
ejemplo.to_excel("ejemplo.xlsx", sheet_name="personas", index=False)

# leer el excel
ejemplo = pd.read_excel("ejemplo.xlsx", sheet_name="personas")

ejemplo.info()