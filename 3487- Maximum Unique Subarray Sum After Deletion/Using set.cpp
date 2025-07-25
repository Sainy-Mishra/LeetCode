class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int mx=INT_MIN;
        set<int> st;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            if(nums[i]>0){
                st.insert(nums[i]);
            }
        }
        if(mx<0){
            return mx;
        }

        for(int x:st){
            ans+=x;
        }

        return ans;
    }
};