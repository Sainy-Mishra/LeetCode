class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size=nums.size()/3;
        vector<vector<int>> result;
        for(int i=2;i<nums.size();i+=3){
            if(nums[i]-nums[i-2]>k){
                return {};
            }
            else{
                result.push_back({nums[i-2],nums[i-1],nums[i]});
            }
        }
        return result;
    }
};