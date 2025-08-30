#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &result){
    vis[node]=1;
    result.push_back(node);
    for(auto& it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,result);
        }
    }
}

vector<int> dfs_graph(int n, vector<vector<int>> &adj){
    vector<int> vis(n+ 1,0);
    int start=1;
    vector<int> result;
    dfs(start,adj,vis,result);
    return result;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n+ 1);
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    cout<<endl;
    
    cout<<"Adjacency List: "<<endl;
    
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    
    cout<<"Dfs result: "<<endl;
    vector<int> result = dfs_graph(n, adj);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    

    return 0;
}