import pandas as pd

def generar_reporte(df):

    
    """
    
    Generador que genera reporte de cada aerolinea, contiene los gastos totales, combustibles en galon utilizados y horas vuelo en el 2023


    """

    # calcular los gastos totales
    total_expenses = df.groupby('CARRIER')[["EXP_PILOT_COPILOT","EXP_FUEL_OIL","EXP_HULL_INS","EXP_THIRD_PARTY_LIAB_INS","EXP_PAX_LIAB_INS","EXP_MAINTENANCE","EXP_DEPRECIATION"]].sum()
    for carrier, expenses in total_expenses.iterrows():
        total = expenses.sum()
        fuel = df[df['CARRIER'] == carrier]['FUEL_ISSUED'].sum()
        hours = df[df['CARRIER'] == carrier]['BLK_HOURS'].sum()
        yield f"---------------------------\
                \nAerolínea: {carrier}\
                \nGastos totales en 2023: {total}\
                \nCombustible en galones gastados en 2023: {fuel}\
                \nHoras en vuelo en 2023: {hours}\
                \n---------------------------\n"



def encontrar_num_atipicos(column):

    """

    Funcion para encontrar el numero de valores atipicos de una columna.
    
    """
    # cuartil 1
    q1 = column.quantile(0.25)
    # cuartil 3
    q3 = column.quantile(0.75)
    # rango intercuatil
    iqr = q3 - q1
    # limite inferior 
    lower_bound = q1 - 1.5 * iqr
    # limete superior
    upper_bound = q3 + 1.5 * iqr
    # si los valores estan de abajo o arriba de los limites son atipicos
    atipicos = column[(column < lower_bound) | (column > upper_bound)]
    return len(atipicos)

