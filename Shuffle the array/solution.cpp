class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result_arr;
        for (size_t i = 0; i < n; i++) {
            result_arr.push_back(nums[i]);
            result_arr.push_back(nums[i + n]);
        }
        return result_arr;
    }
};