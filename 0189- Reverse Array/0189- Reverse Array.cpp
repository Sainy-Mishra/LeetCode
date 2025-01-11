class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int l=nums.size();
        k=k%l;
        reverses(nums,0,l-1);
        reverses(nums,0,k-1);
        reverses(nums,k,l-1);
        return nums;
    }

    void reverses(vector<int>& nums,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;

            start++;
            end--;
        }
    }
};