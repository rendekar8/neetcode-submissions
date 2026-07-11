class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> ints;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens.at(i) == "+"){
                int a1 = ints.top();
                ints.pop();
                int a2 = ints.top();
                ints.pop();
                int result = a1 + a2;
                ints.push(result);
            }
            else if(tokens.at(i) == "-") {
                int a1 = ints.top();
                ints.pop();
                int a2 = ints.top();
                ints.pop();
                int result = a2 - a1;
                ints.push(result);
            } 
            else if(tokens.at(i) == "*") {
                int a1 = ints.top();
                ints.pop();
                int a2 = ints.top();
                ints.pop();
                int result = a1 * a2;
                ints.push(result);
            }
            else if(tokens.at(i) == "/") {
                int a1 = ints.top();
                ints.pop();
                int a2 = ints.top();
                ints.pop();
                int result = a2 / a1;
                ints.push(result);
            } else {
                int newInt = std::stoi(tokens.at(i));
                ints.push(newInt);
            }
        }
        return ints.top();
    }
};
