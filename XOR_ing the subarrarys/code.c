/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {
    int result = 0;
    int i,j;
    for (i = 0; i < n1; i++) {
        int currentXOR = 0;
        for (j = i; j < n1; j++) {
            currentXOR ^= A[j];
            result ^= currentXOR;
        }
    }

    return result;
}
