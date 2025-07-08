class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int p=players.size();
        int t=trainers.size();
        int l=0;
        int r=0;
        int count=0;
        while(l<p && r<t){
            if(players[l]<=trainers[r]){
                l=l+1;
                r=r+1;
                count++;
            }
            else{
                r=r+1;
            }
        }
        return count;
    }
};