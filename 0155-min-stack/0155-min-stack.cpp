class MinStack {
        long long mini=LONG_MIN;
        stack<long long> st;
public:
    MinStack() {

    }
    
    void push(int value) {
        long long val=value;
        if(st.empty()){
            st.push(val);
            mini=val;
        }
        else{
            if(val>mini) st.push(val);
            else{
                st.push(2LL*val-mini);
                mini=val;
            }
        }
    }
    
    void pop() {
        long long x = st.top();
        st.pop();
        if(x<mini){
            mini = 2LL*mini-x;
        }
    }
    
    int top() {
        long long x =st.top();
        if(mini<=x) return x;
        return mini;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */