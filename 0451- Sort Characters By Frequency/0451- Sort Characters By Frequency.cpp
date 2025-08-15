class Solution {
public:
    typedef pair<int, char> P;
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(auto &i:s){
            freq[i]++;
        }

        priority_queue<P> pq;
        for(auto &it:freq){
            pq.push({it.second, it.first});
        }

        string result="";
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            result.append(top.first,top.second);
        }
        return result;
    }
};
