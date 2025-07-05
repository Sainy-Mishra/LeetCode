class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        int n=arr.size();
        int result=-1;

        for(int num:arr){
            freq[num]++;
        }

        for(auto& [num, count]: freq){
            if(num==count){
                result=max(result,num);
            }
        }

        return result;
    }
};