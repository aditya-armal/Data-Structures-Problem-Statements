class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result = numBottles;
        while (numBottles >= numExchange) {
            int emptyBottles = numBottles / numExchange;
            result += emptyBottles;
            numBottles = emptyBottles + (numBottles % numExchange);
        }
        return result;
    }
};