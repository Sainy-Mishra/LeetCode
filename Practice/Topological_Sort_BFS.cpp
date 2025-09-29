#include <bits/stdc++.h>
using namespace std;

vector<int> toposort(int V, vector<vector<int>> &adj){
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
    
    return result;
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

    cout << "Topological Sort of the graph:" << endl;
    vector<int> order = toposort(n, adj);
    for (int node : order) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}