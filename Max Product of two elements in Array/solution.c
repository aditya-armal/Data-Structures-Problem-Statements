int maxProduct(int* nums, int numsSize) {
    int maxProduct = 0;
    int i,j;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if(nums[i]!=0 || nums[j]!=0){
                int currentProduct = (nums[i]-1) * (nums[j]-1);
                if (currentProduct > maxProduct) {
                    maxProduct = currentProduct;
                }
            }          
        }
    }
    return maxProduct;
}