#!/usr/bin/env python3

import numpy as np

def determinant(A):
    size = len(A)
    P = np.eye(size, dtype=np.double)
    L = np.eye(size, dtype=np.double)
    U = np.array(A, np.double)
    for i in range(size):
        for j in range(i, size):
            if ~np.isclose(U[i, i], 0.0):
                break
            U[[j, j+1]] = U[[j+1, j]]
            P[[j, j+1]] = P[[j+1, j]]
        fact = U[i+1:, i] / U[i, i]
        L[i+1:, i] = fact
        U[i+1:,] -= fact[:, np.newaxis] * U[i]
    det = float(round(np.prod(np.diag(U))))
    return P, L, U, det
