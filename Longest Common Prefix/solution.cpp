class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";  // If the vector is empty, there's no common prefix.
        }

        std::string prefix = strs[0];  // Start with the first string as the prefix.

        for (const std::string& str : strs) {
            int i = 0;
            while (i < prefix.length() && i < str.length() && prefix[i] == str[i]) {
                i++;
            }
            prefix = prefix.substr(0, i);  // Update the prefix based on common characters.
        }

        return prefix;
    }
};