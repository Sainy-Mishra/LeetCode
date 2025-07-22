class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int result=0;
        int n=nums.size();
        unordered_set<int> st;

        while(j<n){
            if(!st.count(nums[j])){
                sum+=nums[j];
                result=max(result,sum);
                st.insert(nums[j]);
                j++;
            }
            else{
                while(st.count(nums[j])){
                    sum-=nums[i];
                    st.erase(nums[i]);
                    i++;
                }
            }
        }

        return result;
    }
};