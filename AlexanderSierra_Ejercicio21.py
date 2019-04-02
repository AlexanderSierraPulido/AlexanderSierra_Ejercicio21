import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ AlexanderSierra_Ejercicio21.cpp")
os.system("./a.out AlexanderSierra_Ejercicio21.cpp > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("datos.png")
