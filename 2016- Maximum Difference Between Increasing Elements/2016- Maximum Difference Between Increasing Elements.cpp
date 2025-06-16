class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maximum=-1;
        int n=nums.size();
        for (int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    maximum=max(nums[i]-nums[j],maximum);
                }
            } 
        }
        return maximum;
    }
};