import scipy as sp
import numpy as np

#cluster sites
Nc = 4
#zone de Brillouin
K0 = np.array([0, 0])
K1 = np.array([sp.pi, 0])
K2 = np.array([0, sp.pi])
K3 = np.array([sp.pi, sp.pi])
k = sp.array([kx, ky])

R = np.array([-1, -1])

t = np.exp((K2+k).dot(R))
print(t)


