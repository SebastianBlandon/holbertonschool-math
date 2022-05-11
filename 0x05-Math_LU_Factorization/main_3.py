#!/usr/bin/python3

import numpy as np
gradient = __import__('3-gradient').gradient

if __name__ == "__main__":
  np.random.seed(0)
  A = np.random.rand(5, 5)
  np.random.seed(0)
  b = np.random.rand(5)
  tol = 10**(-2)
  print("The matrix A:\n",A)
  print("The vector b:\n",b)
  print("The solution using gradient descent algorithm\n",gradient(A, b, tol, 50000))
  print("Verify if A.T A x = b\n", np.dot(A.T, A) @ gradient(A, b, tol, 50000))
