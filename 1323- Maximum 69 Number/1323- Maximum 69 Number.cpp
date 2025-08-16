class Solution {
public:
    int maximum69Number (int num) {
        char ch='6';
        string s=to_string(num);
        size_t pos = s.find(ch);
        if(pos!=-1){
            s[pos]='9';
        }
        int n=stoi(s);
        return n;
    }
};