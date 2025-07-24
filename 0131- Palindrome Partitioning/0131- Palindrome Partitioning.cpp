class Solution {
public:

    void findCombinations(int ind, string &s, vector<string> &path, vector<vector<string>> &result){
        if(ind==s.length()){
            result.push_back(path);
            return;
        }

        for(int i=ind;i<s.length();++i){
            if(isPalindrome(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                findCombinations(i+1,s,path,result);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string &str,int ind, int i){
        while(ind<=i){
            if(str[ind++]!=str[i--]){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<string> path;
        vector<vector<string>> result;
        findCombinations(0,s,path,result);

        return result;
    }
};