class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n= nums.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if((abs(i-j)<= k) && (nums[i]==nums[j])){
                    return true;
                }
            }
        }
        return false;
    }
};