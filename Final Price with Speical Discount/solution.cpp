class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result_arr;

        for (size_t i = 0; i < prices.size(); i++) {
            int discount = 0;

            for (size_t j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    discount = prices[j];
                    break;
                }
            }

            result_arr.push_back(prices[i] - discount);
        }

        return result_arr;
    }
};