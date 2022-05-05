class MyStack {
    deque<int>mydeque;
public:
    MyStack() {
       
    }
    
    void push(int x) {
        mydeque.push_back(x);
    }
    
    int pop() {
        int x = mydeque.back();
        mydeque.pop_back();
        return x;
    }
    
    int top() {
        return mydeque.back();
    }
    
    bool empty() {
        return mydeque.empty();
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