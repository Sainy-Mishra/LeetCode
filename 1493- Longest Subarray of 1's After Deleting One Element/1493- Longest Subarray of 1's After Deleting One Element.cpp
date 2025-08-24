class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxlength=0;
        int zeros=0;
        int left=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeros+=1;
            }
            while(zeros>1){
                if(nums[left]==0){
                    zeros-=1;
                }
                left+=1;
            }
            maxlength=max(maxlength,right-left);
        }
        return maxlength; 
    }
};