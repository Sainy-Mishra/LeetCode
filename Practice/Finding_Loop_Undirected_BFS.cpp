#include<bits/stdc++.h>
using namespace std;

bool detect(int src, vector<vector<int>> &adj, vector<int> &vis){
    vis[src]=1;
    queue<pair<int, int>> q;
    q.push({src,-1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it,node});
            }
            else if(parent!=it){
                return true;
            }
        }
    }
    return false;
}

bool iscycle(int v, vector<vector<int>> &adj){
    vector<int> vis(v+ 1, 0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)){
                return true;
            }
        }
    }
    return false;
}

int main(){
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

    if(iscycle(n, adj)){
        cout<<"The graph has cycle.";
    }
    else{
        cout<<"The graph doenst have cycle.";
    }
}