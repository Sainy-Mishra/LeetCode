class Solution {
public:
    char kthCharacter(int k) {
        string result="a";
        while(result.length()<k){
            string t="";
            for(int i=0;i<result.length();i++){
                t+=(result[i]+1);
            }
            result+=t;
        }
        return result[k-1];
    }
};