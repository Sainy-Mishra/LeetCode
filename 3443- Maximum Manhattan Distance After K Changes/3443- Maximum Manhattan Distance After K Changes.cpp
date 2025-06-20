class Solution {
public:
    int maxDistance(string s, int k) {
        int ans=0;
        int minimum=0;
        int n=s.length();
        int N=0,S=0,E=0,W=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                N++;
            }
            else if(s[i]=='S'){
                S++;
            }
            else if(s[i]=='E'){
                E++;
            }
            else{
                W++;
            }
            ans=max(ans,min(abs(N-S)+abs(E-W)+2*k,i+1));
        }
        return ans;
    }
};