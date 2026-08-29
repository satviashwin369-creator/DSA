class MyQueue {
public:
    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        shift();
        int x = outStack.top();
        outStack.pop();
        return x;
    }

    int peek() {
        shift();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }

private:
    void shift() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */