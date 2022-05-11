#!/usr/bin/env python3
import scipy
import scipy.linalg as solve
def lu(A):
    _, L, U = solve.lu(A)
    return L, U
