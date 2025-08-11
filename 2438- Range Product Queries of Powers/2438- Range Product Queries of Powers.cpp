class Solution {
public:
    int M=1e9 + 7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> result;
        vector<int> power;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0){
                power.push_back(pow(2,i));
            }
        }

        for(auto &query:queries){
            int start=query[0];
            int end=query[1];
            long prod=1;
            for(int i=start;i<=end;i++){
                prod=(prod*power[i])%M;
            }
            result.push_back(prod);
        }

        return result;
    }
};