class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        
        for(char ch:s){
            int n=result.length();
            if(n>=2 && ch==result[n-1] && ch==result[n-2]){
                continue;
            }
            else{
                result+=ch;
            }
        }

        return result;
    }
};