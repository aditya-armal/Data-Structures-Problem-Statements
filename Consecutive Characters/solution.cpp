class Solution {
public:
    int maxPower(string s) {
        int maxPower = 1;
    int currentPower = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            currentPower++;
        } else {
            maxPower = std::max(maxPower, currentPower);
            currentPower = 1;
        }
    }

    return std::max(maxPower, currentPower);
    }
};