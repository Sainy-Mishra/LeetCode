class Solution {
public:
    int possibleStringCount(string word) {
        int possible=1;
        int n=word.length();
        for(int i=0;i<n;i++){
            if(word[i]==word[i+1]){
                possible++;
            }
        }
        return possible;
    }
};