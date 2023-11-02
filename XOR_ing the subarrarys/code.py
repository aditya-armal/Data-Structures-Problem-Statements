
#   @input A : Integer array
#   @input n1 : Integer array's ( A ) length
  
#   @Output Integer
 
def solve(A, n1):
    result = 0

    for i in range(n1):
        currentXOR = 0
        for j in range(i, n1):
            currentXOR ^= A[j]
            result ^= currentXOR

    return result
