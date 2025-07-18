class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length(); 
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); 

        // Base cases
        for (int i = 0; i <= n; i++) {
            dp[i][0] = i; // Deleting all characters from word1
        }

        for (int j = 0; j <= m; j++) {
            dp[0][j] = j; // Inserting all characters of word2
        }

        // Build DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min({
                        dp[i][j - 1],     // Insert
                        dp[i - 1][j],     // Delete
                        dp[i - 1][j - 1]  // Replace
                    });
                }
            }
        }

        return dp[n][m];
    }
};
