# import sympy
import sympy
import numpy as np
from numpy.linalg import matrix_power

# find the reduced row echelon form
print(sympy.Matrix([[1, 3 ,3,2,2,0],[1,4,5,3,7,0],[2,5,4,1,5,0],[1,5,7,2,10,0]]).rref())

# find the rank of matrix
print("Rank of matrix :",sympy.Matrix([[1,3,3,2,2,0],[1,4,5,3,7,0],[2,5,4,1,5,0],[1,5,7,2,10,0]]).rank())

print("I saw that rank of this matrix system is 4, so that the number of free variable is 1 \n")
print("Chose x3 free variable, x3 = t \n")
print(" Answer: x1 = 3t, x2 = -2t, x3 = t, x4 =0, x5 = 0 \n")


def calprop():
    r1 = int(input("Row of probability matrix: "))
    c1 = int(input("Col of probability matrix: "))
    arr1 = [[0] * c1] * r1
    for i in range(r1):
        for j in range(c1):
            arr1[i][j] = input()
    print(arr1)
    r2 = int(input("Row of state matrix: "))
    c2 = int(input("Col of state matrix: "))
    arr2 = [[0] * c2] * r2
    for i in range(r2):
        for j in range(c2):
            arr2[i][j] = input()
    print(arr2)
    count = int(input("Input number of time: "))
    res = [[]*r1]*c2
    res = np.matmul(matrix_power(arr1, count), arr2)
    print(res)

while True:
    p = [[0.17, 0.15, 0.15], [0.2, 0.8, 0.15], [0.1, 0.05, 0.7]]
    s = [15000, 20000, 65000]
    print(np.matmul(matrix_power(p, 3),s))
