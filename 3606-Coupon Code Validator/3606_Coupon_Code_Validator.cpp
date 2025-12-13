class Solution {
public:

    bool checkValidity(string &s){
        if(s.empty()){
            return false;
        }

        for(char &ch:s){
            if(!isalnum(ch) && ch!='_'){
                return false;
            }
        }

        return true;
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string,int> mp={
            {"electronics",0},
            {"grocery",1},
            {"pharmacy",2},
            {"restaurant",3}
        };

        vector<pair<int, string>> temp;

        for (int i=0;i<code.size();i++){
            if(isActive[i] && mp.count(businessLine[i]) && checkValidity(code[i])){
                temp.push_back({mp[businessLine[i]],code[i]});
            }
        }

        sort(begin(temp),end(temp));
        vector<string> result;

        for(auto&it: temp){
            result.push_back(it.second);
        }

        return result;
    }
};