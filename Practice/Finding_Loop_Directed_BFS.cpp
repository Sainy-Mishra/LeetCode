#include <bits/stdc++.h>
using namespace std;

bool toposort(int V, vector<vector<int>> &adj){
    vector<int> indegree(V, 0);
    for(int i=0;i<V;i++){
        for(int &it:adj[i]){
            indegree[it]++;
        }
    }
    
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    
    vector<int>result;
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
    
    if(result.size()==V){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    cout << endl;
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    if(toposort(n,adj)){
        cout<<"The graph has cycles.";
    }
    else{
        cout<<"The graph doesn't has cycles.";
    }
    
    return 0;
}