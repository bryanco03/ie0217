import pandas as pd 
# Se define un dataframe
df = pd.DataFrame(
    {
        "Name": [
            "Braund, Mr. Owen Harris",
            "Allen, Mr. William Henry",
            "Bonnell, Miss. Elizabeth",
        ],
        "Age": [22, 35, 58],
        "Sex":["male", "male", "female"],
    }
)
# mostrar el dataframe
print(df)

# Obtener un serie del dataframe 
print(df["Age"])

# Obtener el valor maximo de la serie
print(df["Age"].max())

# mostrar la descripcion general de los datos numericos de un dataframe
print(df.describe())