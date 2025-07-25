class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int mx=INT_MIN;
        vector<int> visited(101);
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            if(nums[i]>0 && !visited[nums[i]]){
                ans+=nums[i];
                visited[nums[i]]=1;
            }
        }
        if(mx<0){
            return mx;
        }

        return ans;
    }
};