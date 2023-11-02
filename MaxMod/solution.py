
#   @input A : Integer array
#   @input n1 : Integer array's ( A ) length
  
#   @Output Integer
 
def solve(A, n1):
    maxMod = 0

    for i in range(n1):
        for j in range(i + 1, n1):
            if A[i] != 0 or A[j] != 0:
                currentMod = A[i] % A[j] if A[j] > A[i] else A[j] % A[i]
                if currentMod > maxMod:
                    maxMod = currentMod

    return maxMod
