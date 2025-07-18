class Solution {
public:

    int distance(string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
        if(i<0) return j+1;
        if(j<0) return i+1;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(s1[i]==s2[j]){
            return dp[i][j]=distance(s1,s2,i-1,j-1, dp);
        }
        return dp[i][j]=1+min(distance(s1,s2,i,j-1, dp), min(distance(s1,s2,i-1,j, dp),distance(s1,s2,i-1,j-1, dp)));
    }

    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return distance(word1, word2, m-1, n-1, dp);
    }
};