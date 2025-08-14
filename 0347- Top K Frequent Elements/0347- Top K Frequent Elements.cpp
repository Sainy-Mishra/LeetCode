class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto &num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        for(auto &i:mp){
            int value=i.first;
            int freq=i.second;
            pq.push({freq,value});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> result;

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};