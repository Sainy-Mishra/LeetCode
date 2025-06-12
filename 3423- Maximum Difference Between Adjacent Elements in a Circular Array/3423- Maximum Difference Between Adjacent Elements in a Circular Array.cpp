class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxm=abs(nums[0]-nums[n-1]);

        for(int i=1;i<n; i++){
            int diff=abs(nums[i-1] - nums[i]);
            maxm=max(maxm,diff);
        }
        return maxm;
    }
};