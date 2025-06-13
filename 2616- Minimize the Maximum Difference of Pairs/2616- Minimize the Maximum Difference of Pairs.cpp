class Solution {
public:
    bool possiblePairs(vector<int>& nums, int diff, int p){
        int n=nums.size();
        int pairs=0;
        for(int i=0;i<n-1;i++){
            if (nums[i+1]-nums[i] <= diff){
                i++;
                pairs++;
            }
        }

        return pairs>= p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0;
        int h=nums[n-1]-nums[0];
        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(possiblePairs(nums, mid, p)){
                h=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};