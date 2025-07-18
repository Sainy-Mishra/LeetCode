class Solution {
public:

    int distance(string &s1, string &s2, int i, int j){
        if(i<0) return j+1;
        if(j<0) return i+1;

        if(s1[i]==s2[j]){
            return distance(s1,s2,i-1,j-1);
        }
        return 1+min(distance(s1,s2,i,j-1), min(distance(s1,s2,i-1,j),distance(s1,s2,i-1,j-1)));
    }

    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        return distance(word1, word2, m, n);
    }
};