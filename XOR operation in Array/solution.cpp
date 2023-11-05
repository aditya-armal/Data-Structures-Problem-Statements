class Solution {
public:
    int xorOperation(int n, int start) {
        int i,result=0;
        for(i=0;i<n;i++){
            result^=start+2*i;
        }
        return result;
    }
};