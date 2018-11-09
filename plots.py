import matplotlib.pyplot as plt
import numpy as np

data= np.loadtxt('tiempo.txt')
partes = [1,10,20,50,100]

plt.plot(partes,data)
plt.title('Tiempo versus particiones')
plt.show()
plt.close()
data2 = np.loadtxt('procesador.txt')
proc = [1,2,4,8]

plt.plot(proc, data2)
plt.title('Procesador vs tiempo')
plt.show()
plt.close(x)