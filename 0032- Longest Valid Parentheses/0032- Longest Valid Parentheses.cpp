class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        int result=0;
        stack<int> stk;
        stk.push(-1);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(!stk.empty()){
                    result=max(result, i-stk.top());
                }
                else{
                    stk.push(i);
                }
            }
        }
        return result;
    }
};