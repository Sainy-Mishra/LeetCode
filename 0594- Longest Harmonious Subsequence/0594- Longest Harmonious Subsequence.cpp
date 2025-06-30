class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map <int, int> freq;
        int n=nums.size();
        int result=0;
        for(int i:nums){
            freq[i]++;
        }

        for(int i:nums){
            int minimum=i;
            int maximum=i+1;

            if(freq.count(maximum)){
                result=max(result, freq[maximum] + freq[minimum]);
            }
        }

        return result;
    }
};