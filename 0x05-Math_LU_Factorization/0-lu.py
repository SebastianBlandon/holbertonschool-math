#!/usr/bin/env python3
import numpy as np
def lu(A):
    size = len(A)
    L = np.zeros([size, size])
    U = np.zeros([size, size])
    U[0] = A[0]
    for i in range(size):
        for j in range(size):
            if (i == j):
                L[i, j] = 1
            if (i < j):
                fact = (A[j, i] / A[i, i])
                L[j, i] = fact
                for k in range(size):
                    A[j, k] = A[j, k] - (fact * A[i, k])
                    U[j, k] = A[j, k]
    return L, U
