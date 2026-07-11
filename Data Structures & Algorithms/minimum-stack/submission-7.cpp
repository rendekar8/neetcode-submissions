class MinStack {
public:
    std::stack<int>* main;
    std::stack<int>* minkeeper;

    MinStack() {
        main = new std::stack<int>;
        minkeeper = new std::stack<int>;
    }
    
    void push(int val) {
        if(main->empty()) {
            main->push(val);
            minkeeper->push(val);
        } else {
            main->push(val);
            int minSoFar = minkeeper->top();
            if(val < minSoFar) {
                minkeeper->push(val);
            } else {
                minkeeper->push(minSoFar);
            }
        }
    }
    
    void pop() {
            main->pop();
            minkeeper->pop();
    }
    
    int top() {
            return main->top();
    }
    
    int getMin() {
            return minkeeper->top();
    }
};
