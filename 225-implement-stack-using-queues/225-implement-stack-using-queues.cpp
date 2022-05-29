class MyStack {
public:
    //creating a queue
    queue<int> q1;
    MyStack() {
    }
    
    //pushing the element first, push the front of the queue to the top
    //then, pop the element from the queue
    void push(int x) {
        int size=q1.size();
        q1.push(x);
        while(size--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    //poping the last element after saving its value and returning it
    int pop() {
        int y=top();
        q1.pop();
        return y;
    }
    
    //return the front value
    int top() {
        return q1.front();
    }
    
    //return if the queue is empty or not
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */