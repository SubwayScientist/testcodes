import scipy.optimize
import numpy as np
import matplotlib.pyplot as plt


def function(x, Tc, B):
    """ Photoluminescence with two diffusion channels """
    beta = 0.327
    T = np.array([29.0, 32.07, 36.1, 38.07, ])
    x = np.log(Tc - T)
    return -beta*x + np.log(Tc**beta / B)

T = np.array([29.0, 32.07, 36.1, 38.07, ])
a = np.array([0.0208, 0.0231, 0.0258, 0.0277])
Tc = 50
x = np.log(Tc - T)
y = np.log(a)

popt, pcov = scipy.optimize.curve_fit(
function, x, y, p0=[50., 1.0])

print(popt)

plt.figure()
plt.errorbar(x, function(x, popt[0], popt[1]), xerr=0., yerr=0., fmt='o')
plt.show()
