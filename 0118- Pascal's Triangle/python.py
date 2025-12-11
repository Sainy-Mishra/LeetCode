class Solution(object):
    def generate(self, numRows):
        matrix=[]
        for i in range(numRows):
            row=[1]*(i+1)

            for j in range (1,i):
                row[j]=matrix[i-1][j]+matrix[i-1][j-1]
            
            matrix.append(row)
        return matrix
        