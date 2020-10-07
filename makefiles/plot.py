import numpy as np
import matplotlib.pyplot as plt

datax, datay = np.loadtxt("datos.txt", unpack=True)

fig, ax = plt.subplots()

ax.plot(datax, datay, 'r-o', label="Data")

ax.legend()

ax.set_xlabel("numero de terminos")
ax.set_ylabel("delta %")

fig.savefig("fig.pdf")
