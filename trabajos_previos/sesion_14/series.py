import pandas as pd 

# se define una serie
ages = pd.Series([22, 35, 58], name="Age")

# se muestra la serie
print(ages)

print(ages.max())