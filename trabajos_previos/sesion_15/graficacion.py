import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np 

fig, ax = plt.subplots() # crear figura que contiene los ejes
ax.plot([1, 2, 3, 4], [1, 4, 2, 3]) # graficar datos en los ejes
plt.show()