class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){ //store value and index
            vec.push_back({i,nums[i]});
        }

        sort(vec.begin(), vec.end(), [](auto &a, auto &b){ //decreasing order 
            return a.second> b.second;
        });
        sort(vec.begin(), vec.begin()+k); //till k sort 

        vector<int> result;

        for(int i=0;i<k;i++){ //storing the values in result acc to sorted vec
            result.push_back(vec[i].second);
        }
        return result;
    }
};