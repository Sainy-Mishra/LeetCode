class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenSub=0;
        int oddSub=0;
        int altSub=1;
        int parity=nums[0]%2;
        int n=nums.size();

        for(int& num:nums){
            if(num%2==0){
                evenSub++;
            }
            else{
                oddSub++;
            }
        }

        for(int i=1;i<n;i++){
            int currParity=nums[i]%2;
            if(currParity!=parity){
                altSub++;
                parity=currParity;
            }
        }

        return max({evenSub, oddSub, altSub});
    }
};