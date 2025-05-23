class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        for (int i=goal;i>=0;i--){
            if (i+nums[i] >= goal){
                goal=i;
            }
        }
        if (goal == 0){
            return true;
        }
        else{
            return false;
        }
    }
};