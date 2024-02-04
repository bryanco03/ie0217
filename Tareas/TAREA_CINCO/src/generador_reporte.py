import pandas as pd

def generar_reporte(df, columns):
    for index, row in df.iterrows():
        sum_total = sum(row[column] for column in columns)
        yield f"------------------------------\
                \n{index + 1}. Compañia aérea: {row['CARRIER']}\
                \nMes: {row['MONTH']}\
                \nAño: {row['YEAR']}\
                \nTotal gastos: {sum_total}\
                \nGalones de combustible gastados: {row['FUEL_ISSUED']}\
                \nTiempo total de los vuelos: {row['BLK_HOURS']}\
                \n------------------------------\n"



def find_outliers_iqr(column):
    q1 = column.quantile(0.25)
    q3 = column.quantile(0.75)
    iqr = q3 - q1
    lower_bound = q1 - 1.5 * iqr
    upper_bound = q3 + 1.5 * iqr
    return column[(column < lower_bound) | (column > upper_bound)]
