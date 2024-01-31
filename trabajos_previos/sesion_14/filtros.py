import pandas as pd 

# Se lee el archivo csv
ejemplo = pd.read_csv("ejemplo.csv")

# obtener dataframe con restricion 
above_15 =  ejemplo[ejemplo["edad"] > 15]

# mostrar dataframe
print(above_15.head())

# mostrar dimension
print(above_15.shape)

altura = ejemplo[ejemplo["altura"].isin([140, 168])]

print(altura)

nombres = ejemplo.loc[ejemplo["edad"] > 15, "nombre"]

print(nombres)