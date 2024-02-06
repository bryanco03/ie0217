import pandas as pd

def generar_reporte(df):
    total_expenses = df.groupby('CARRIER')[["EXP_PILOT_COPILOT","EXP_FUEL_OIL","EXP_HULL_INS","EXP_THIRD_PARTY_LIAB_INS","EXP_PAX_LIAB_INS","EXP_MAINTENANCE","EXP_DEPRECIATION"]].sum()
    for carrier, expenses in total_expenses.iterrows():
        total = expenses.sum()
        fuel = df[df['CARRIER'] == carrier]['FUEL_ISSUED'].sum()
        hours = df[df['CARRIER'] == carrier]['BLK_HOURS'].sum()
        yield f"---------------------------\
                \nAerolínea: {carrier}\
                \nGastos totales em 2023: {total}\
                \nCombustible en galones gastados en 2023: {fuel}\
                \nHoras en vuelo: {hours}\
                \n---------------------------\n"



def find_outliers_iqr(column):
    q1 = column.quantile(0.25)
    q3 = column.quantile(0.75)
    iqr = q3 - q1
    lower_bound = q1 - 1.5 * iqr
    upper_bound = q3 + 1.5 * iqr
    atipicos = column[(column < lower_bound) | (column > upper_bound)]
    return len(atipicos)

