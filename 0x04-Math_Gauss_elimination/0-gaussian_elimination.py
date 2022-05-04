import numpy
from numpy import linalg

def gaussian_elimination(A,b):
    if(not linalg.det(A)):
        print("You can't divide by zero!")
        return None
    return linalg.solve(A, b)
