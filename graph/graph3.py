import scipy.optimize
import numpy as np
import matplotlib.pyplot as plt


def function(x, Tc, B):
    """ Relation for isoctane-methanol solution """
    beta = 0.327
    T = np.array([29.0, 32.07, 36.1, 38.07, ])
    x = np.log(Tc - T)
    return -beta*x + np.log(Tc**beta / B)

# Array for our Temperatures and slope related to them
T = np.array([29.0, 32.07, 36.1, 38.07, ])
a = np.array([0.0208, 0.0231, 0.0258, 0.0277])

# Entry parameter before optimizing.
Tc = 50

x = np.log(Tc - T)
y = np.log(a)

# Function that finds the optimal parameters for our relation.
popt, pcov = scipy.optimize.curve_fit(
function, x, y, p0=[50., 1.0])

# Error on our values.
stddev_Tc = np.sqrt(pcov[0,0])
stddev_B = np.sqrt(pcov[1,1])

print(popt)
print(stddev_Tc)


X = np.log(popt[0]-T)

plt.figure()
plt.xlabel(r"log(Tc - T)")
plt.ylabel(r"log(pente)")

plt.errorbar(X, y, xerr=0., yerr=0., fmt='o')
plt.plot(X, function(X, popt[0], popt[1]))
plt.show()

