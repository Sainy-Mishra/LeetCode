class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        vector<int> indegree(numCourses, 0);
        for(int i=0;i<numCourses;i++){
            for(int &it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        vector<int> result;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            result.push_back(node);
            for(int &it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }

        if(result.size()==numCourses){
            return result;
        }
        else{
            return {};
        }
    }
};