class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> jindex;
        vector<int> result;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                jindex.push_back(i);
            }
        }

        for(int i=0;i<n;i++){
            for(int j:jindex){
                if(nums[j]==key && abs(i-j)<=k){
                    result.push_back(i);
                    break;
                }
            }
        }

        sort(result.begin(),result.end());

        return result;
    }
};