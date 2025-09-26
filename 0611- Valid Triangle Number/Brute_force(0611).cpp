class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        if(size(nums)<3){
            return 0;
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<size(nums)-2;i++){
            for(int j=i+1;j<size(nums)-1;j++){
                for(int k=j+1;k<size(nums);k++){
                    if(nums[i]+nums[j]>nums[k]){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};