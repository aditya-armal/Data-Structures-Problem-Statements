class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parenthesesStack;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                parenthesesStack.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (parenthesesStack.empty()) {
                    return false;  
                }
                char openParenthesis = parenthesesStack.top();
                parenthesesStack.pop();
                if ((c == ')' && openParenthesis != '(') ||
                    (c == ']' && openParenthesis != '[') ||
                    (c == '}' && openParenthesis != '{')) {
                    return false;  
                }
            }
        }
        return parenthesesStack.empty(); 
    }
};