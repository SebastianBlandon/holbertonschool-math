#!/usr/bin/env python3
def gaussian_elimination(A, b):
    import numpy
    from numpy import linalg
    if(not linalg.det(A)):
        print("You can't divide by zero!")
        return None
    return linalg.solve(A, b)
