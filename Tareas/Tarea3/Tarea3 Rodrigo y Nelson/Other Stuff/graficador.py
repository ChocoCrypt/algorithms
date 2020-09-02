import matplotlib.pyplot as plt
import numpy as np

x , y , lamdb = np.loadtxt("time_vs_load64.dat" , unpack = True , delimiter = " ")
fig , ax = plt.subplots()
funcion = ax.errorbar(x,y , yerr = lamdb , label = "hash64")
ax.legend()
fig.tight_layout()
plt.show()
