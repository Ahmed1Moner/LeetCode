class MinStack {
public:  
    //implementing two stacks, one for numbers, the other for minimum values
    stack<int> s1,s2;
    
    /*
    s1: push the entered number in the first stack
    s2: if s1 is empty, push the value by default as it's the min one
        push only the minimum values in the second stack, top will be the min value entered each time
    */
    void push(int val) {
        if(s1.empty()||val<=s2.top()){
            s2.push(val);
        }
        s1.push(val);
    }
    
    
    //the same algorithm as the push method
    
    void pop() {
        if(s1.empty()||s1.top()==s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    //return the top value of the first stack
    int top() {
        return s1.top();
    }
    
    //return the top value of the second stack, the min one
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */