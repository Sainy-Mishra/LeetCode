class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set <int> unique;

        for(int num:nums){
            unique.insert(num);
        }
        nums.clear();
        for(int i:unique){
            nums.push_back(i);
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};