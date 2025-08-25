class MyStack {

private:
    queue<int> st;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        int s=st.size();
        st.push(x);
        for(int i=0;i<s;i++){
            st.push(st.front());
            st.pop();
        }
    }
    
    int pop() {
        int ele=st.front();
        st.pop();
        return ele;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        if(st.size()==0){
            return true;
        }
        return false;
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