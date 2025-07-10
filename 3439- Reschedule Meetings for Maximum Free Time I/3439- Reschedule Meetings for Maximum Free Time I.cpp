class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> free;
        free.push_back(startTime[0]);

        for(int i=1;i<startTime.size();i++){
            free.push_back(startTime[i]-endTime[i-1]);
        }
        free.push_back(eventTime-endTime[endTime.size()-1]);

        int i=0;
        int j=0;
        int currsum=0;
        int maxsum=0;
        int n= free.size();

        while(j<n){
            currsum+=free[j];

            if(i<n && j-i+1 >k+1){
                currsum-=free[i];
                i++;
            }

            maxsum=max(maxsum, currsum);
            j++;
        }

        return maxsum;
    }
};