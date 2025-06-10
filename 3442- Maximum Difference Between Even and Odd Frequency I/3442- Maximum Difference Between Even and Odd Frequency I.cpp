class Solution {
public:
    int maxDifference(string s) {
        int MaxOdd= 0;
        int MinEven= s.length()+1;

        vector<int> freq (26, 0);
        for (int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;

            else if(freq[i]%2==0){
                MinEven=min(MinEven, freq[i]);
            }
            else{
                MaxOdd=max(MaxOdd, freq[i]);
            }
        }
        int result=MaxOdd- MinEven;
        return result;
    }
};