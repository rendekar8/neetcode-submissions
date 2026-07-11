class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for(int i = 0; i < s.length(); i++) {
            if(s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{') {
                stack.push(s.at(i));
            } else {
                if(!stack.empty()) {
                    if((stack.top() == '(' && s.at(i) == ')') ||
                (stack.top() == '[' && s.at(i) == ']') ||
                (stack.top() == '{' && s.at(i) == '}')) {
                    stack.pop();
                } else {
                    return false;
                }
                } else {
                    return false;
                }
                
            }
        }
        return stack.empty();
    }
};
