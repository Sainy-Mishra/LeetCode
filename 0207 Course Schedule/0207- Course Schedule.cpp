class Solution {
public:
    bool detect(int node,vector<int> &dfsvis, vector<vector<int>>& adj, vector<int> &vis){
        vis[node]=1;
        dfsvis[node]=1;
        for(int &it: adj[node]){
            if(!vis[it]){
                if(detect(it, dfsvis, adj, vis)){
                    return true;
                }
            }
            else if(dfsvis[it]){
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
        vector<int> vis(numCourses, 0);
        vector<int> dfsvis(numCourses, 0);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(detect(i,dfsvis,adj,vis)){
                    return false;
                }
            }
        }
        return true;
    }
};