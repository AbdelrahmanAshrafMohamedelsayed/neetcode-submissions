class MinStack {

private:
    stack<int>st;
    stack<int>mnst;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mnst.empty()) {
            mnst.push(val);
        } else {
            mnst.push(min(val,mnst.top()));
        }
        
    }
    
    void pop() {
            mnst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mnst.top();
    }
};
