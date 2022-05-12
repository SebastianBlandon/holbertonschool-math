#!/usr/bin/env python3

import numpy as np

def lu(A):
    size = len(A)
    L = np.eye(size, dtype=np.double)
    U = np.array(A, np.double)
    U[0] = A[0]
    for i in range(size):
        fact = U[i+1:, i] / U[i, i]
        L[i+1:, i] = fact
        U[i+1:,] -= fact[:, np.newaxis] * U[i]
    return L, U
