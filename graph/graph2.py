import numpy as np
import matplotlib.pyplot as plt
from CSV import read_three_col_csv

T, fi, dfi = read_three_col_csv('data_lab2.csv')

T = np.array(T)                                
fi = np.array(fi)
dfi = np.array(dfi)                                

b, covariance = np.polyfit(T, fi, deg=1, cov=True)

stddev_b0 = np.sqrt(covariance[0,0])
stddev_b1 = np.sqrt(covariance[1,1])

b_upper = b + np.array([stddev_b0, -stddev_b1])
b_lower = b + np.array([-stddev_b0, stddev_b1])

x = np.linspace(27, 39, 100)
y = b[0]*x + b[1]

y_upper = b_upper[0]*x + b_upper[1]
y_lower = b_lower[0]*x + b_lower[1]

print(b)
print(stddev_b0, stddev_b1)

plt.figure()
plt.xlabel(r"Temperature (C)")
plt.ylabel(r"% isooctane")

plt.xlim(27, 39)
plt.ylim(62, 70)

plt.errorbar(T, fi, xerr=0.02, yerr=dfi, fmt='o')

plt.plot(x, y, color='black')
plt.plot(x, y_upper, color='r', linestyle='--')
plt.plot(x, y_lower, color='r', linestyle='--')
plt.fill_between(x, y_upper, y_lower, color='r', alpha=0.3)
plt.savefig('graph2.png')

plt.show()
