#include<bits/stdc++.h>
using namespace std;

bool detect(int node, int parent, vector<vector<int>> &adj, vector<int> &vis){
    vis[node]=1;
    for(int i:adj[node]){
        if(!vis[i]){
            if(detect(i, node, adj, vis)){
                return true;
            }
        }
        else if(parent != i){
            return true;
        }
    }
    return false;
}

bool iscycle(int v, vector<vector<int>> &adj){
    vector<int> vis(v+ 1, 0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            if(detect(i, -1, adj,vis)){
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