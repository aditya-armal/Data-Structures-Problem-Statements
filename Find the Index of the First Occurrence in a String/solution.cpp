class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayLength = haystack.length();
        int needleLength = needle.length();
        if (needleLength == 0) {
            return 0; 
        }
        for (int i = 0; i <= hayLength - needleLength; i++) {
            if (haystack.substr(i, needleLength) == needle) {
                return i;
            }
        }
        return -1;
    }
};