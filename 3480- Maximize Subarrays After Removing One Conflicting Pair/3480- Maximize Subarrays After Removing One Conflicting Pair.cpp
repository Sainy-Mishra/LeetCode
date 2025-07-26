class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        long long valid=0;
        vector<vector<int>> Conflicts(n+1);

        for(auto &p: conflictingPairs){
            int a=min(p[0],p[1]);
            int b=max(p[0],p[1]);
            Conflicts[b].push_back(a);
        }

        int maxConflict=0;
        int secondConflict=0;
        vector<long long> extra(n+1,0);

        for(int end=1;end<=n;end++){
            for(auto &u: Conflicts[end]){
                if(u>=maxConflict){
                    secondConflict=maxConflict;
                    maxConflict=u;
                }
                else if(u>secondConflict){
                    secondConflict=u;
                }
            }
            valid+=end-maxConflict;
            extra[maxConflict]+=maxConflict-secondConflict;
        }

        return valid + *max_element(extra.begin(), extra.end());
    }
};