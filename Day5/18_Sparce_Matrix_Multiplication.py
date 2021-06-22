
# Write a function that takes in two integer matrices and multiplies them
# together. Both matrices will be sparse, meaning that most of their elements will
# be zero. Take advantage of that to reduce the number of total computations
# that your function performs. If the matrices can't be multiplied together, your
# function should return [[]].

from typing import List


class SparseMatrix(object):
    def __init__(self, nrow, ncol, S):
        self.nrow = nrow
        self.ncol = ncol
        self.S = S
        
    @staticmethod
    def to_sparse(M):
        S = dict()
        for r, row in enumerate(M):
            for c, value in enumerate(row):
                if value: S[(r, c)] = value
        return S    
    
    @classmethod
    def from_dense(cls, M):
        nrow, ncol = len(M), len(M[0])
        S = cls.to_sparse(M)
        return cls(nrow, ncol, S)
    
    @classmethod
    def from_sparse(cls, nrow, ncol, S):
        return cls(nrow, ncol, S)
    
    def __matmul__(self, B):
        C = dict()
        for (a_r, a_c), a_val in self.S.items():
            for b_c in range(B.ncol):
                if (a_c, b_c) in B.S:
                    b_val = B.S[(a_c, b_c)]
                    C[(a_r, b_c)] = C.get((a_r, b_c), 0) + a_val * b_val
        return self.from_sparse(self.nrow, B.ncol, C)
        
    def to_dense(self):
        M = [[0] * self.ncol for _ in range(self.nrow)]
        for (r, c), value in self.S.items():
            M[r][c] = value
        return M

class Solution:
    def multiply(self, A: List[List[int]], B: List[List[int]]) -> List[List[int]]:
        A = SparseMatrix.from_dense(A)  # O(n^2)
        B = SparseMatrix.from_dense(B)  # O(n^2)
        C = A @ B  # O(K) with K be the ~ non elements in C
        return C.to_dense()



A=[[0,2,0],[0,-3,5]]
B=[[0,10,0],[0,0,0],[0,0,4]]
obj=Solution
l=obj(A,B)


