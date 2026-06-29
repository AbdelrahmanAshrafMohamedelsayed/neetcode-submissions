class MinStack {

private:
    stack<int>st;
    int mn;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>st2=st;
        int mn=st2.top();
        while(!st2.empty()){
            mn=min(mn,st2.top());
            st2.pop();
        }
        return mn;
    }
};
