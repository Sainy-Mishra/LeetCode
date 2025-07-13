class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> pq;
        int count=0;
        int units=0;
        for(vector<int>x: boxTypes){
            pq.push({x[1],x[0]});
        }

        while(!pq.empty() && count<truckSize){
            if(count+pq.top().second<truckSize){
                count+=pq.top().second;
                units+=pq.top().second*pq.top().first;
                pq.pop();
            }
            else{
                int diff=truckSize-count;
                units+=pq.top().first*diff;
                count+=diff;
                pq.pop();
            }
        }

        return units;
    }
};