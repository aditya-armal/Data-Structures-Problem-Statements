/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * @input D : Integer
 * 
 * @Output Integer
 */
int solve(int A, int B, int C, int D) {
    if(A==0||B==0||C==0||D==0)
        return 0;
    if(A==B && D==C)
        return 1;
    if(B==C && D==A)
        return 1;
}