class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal=0;
        int streak=0;
        int result=0;

        for(int n:nums){
            if(n>maxVal){
                maxVal=n;
                result=0;
                streak=0;
            }

            if(n==maxVal){
                streak++;
            }
            else{
                streak=0;
            }
            result=max(result,streak);
        }
        return result;
    }
};