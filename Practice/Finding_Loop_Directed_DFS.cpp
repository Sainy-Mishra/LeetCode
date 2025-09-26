#include <bits/stdc++.h>
using namespace std;

bool checkcycle(int n, vector<int> &vis, vector<int> &dfsvis, vector<vector<int>> &adj){
    vis[n]=1;
    dfsvis[n]=1;
    for(int it:adj[n]){
        if(!vis[it]){
            if(checkcycle(it, vis, dfsvis, adj)){
                return true;
            }
        }
        else if(dfsvis[it]){
            return true;
        }
    }
    dfsvis[n]=0;
    return false;
}

bool iscycle(int n, vector<vector<int>> &adj){
    vector<int> vis(n+ 1, 0);
    vector<int> dfsvis(n+ 1, 0);
    
    for (int i=1;i<=n;i++){
        if(!vis[i]){
            if(checkcycle(i, vis, dfsvis, adj)){
                return true;
            }
        }
    }
    return false;
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
    
    return 0;
}