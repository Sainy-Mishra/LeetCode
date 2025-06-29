class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1e9 + 7;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int result=0;
        int l=0;
        int r=n-1;

        vector<int> power (n,1);

        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2) % MOD;
        }

        while(l<=r){
            if(nums[l]+nums[r] <= target){
                result= (result + power[r-l]) % MOD;
                l++;
            }
            else{
                r--;
            }
        }
        return result;
    }
};