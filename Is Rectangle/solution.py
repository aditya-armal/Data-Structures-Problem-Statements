
#   @input A : Integer
#   @input B : Integer
#   @input C : Integer
#   @input D : Integer
  
#   @Output Integer
 
def solve(A, B, C, D):
    if A == 0 or B == 0 or C == 0 or D == 0:
        return 0
    if (A == B and D == C) or (B == C and D == A):
        return 1
