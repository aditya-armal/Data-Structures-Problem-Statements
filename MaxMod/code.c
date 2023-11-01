/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {
    int maxMod = 0;
    int i,j;
    for (i = 0; i < n1; i++) {
        for (j = i + 1; j < n1; j++) {
            if(A[i]!=0 || A[j]!=0){
                int currentMod = (A[j]>A[i])?A[i] % A[j]:A[j] % A[i];
                if (currentMod > maxMod) {
                    maxMod = currentMod;
                }
            }          
        }
    }
    return maxMod;
}
