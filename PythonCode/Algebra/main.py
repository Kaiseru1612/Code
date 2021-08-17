import sympy
import numpy as np
from numpy.linalg import matrix_power

# p = [[0.7, 0.15, 0.15], [0.2, 0.8, 0.15], [0.1, 0.05, 0.7]]
# s = [15000, 20000, 65000]
#
# for i in range(1-1):
#     p = np.matmul(p,p)
# print(p)
# print(np.matmul(p, s))
a = np.array([[1, 2, -1], [2, 1, 8], [8, 2, 1]])
b = np.array()
X = np.linalg.inv(a).dot(b)
print(np.linalg.dot(b))
print(X)
