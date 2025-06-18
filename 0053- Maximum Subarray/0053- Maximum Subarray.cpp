class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int csum=0;
        for(int i : nums){
            if(csum<0){
                csum=0;
            }
            csum+=i;
            maxsum=max(maxsum,csum);
        }

        return maxsum;
    }
};