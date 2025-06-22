class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> answer;
        int n=s.length();
        string str="";
        for(int i=0;i<n;i++){
            str+=s[i];
            if(str.length()==k){
                answer.push_back(str);
                str="";
            }
        }

        if(str.length()!=0){
            while(str.length()<k){
                str+=fill;
            }
            answer.push_back(str);
        }

        return answer;
    }
};