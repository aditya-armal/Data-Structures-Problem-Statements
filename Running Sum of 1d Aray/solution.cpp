class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result_arr;
        int sum=0;
        for(size_t i=0;i<nums.size();i++){
            sum+=nums[i];
            result_arr.push_back(sum);
        }
        return result_arr;
    }
};