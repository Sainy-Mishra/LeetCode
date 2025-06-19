class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;

        for(int i=0;i<nums.size();){
            int start=i;
            while(i<nums.size() && nums[i]-nums[start]<=k){
                i++;
            }
            count++;
        }

        return count;
    }
};