#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, vector<vector<int>> &adj){
    vector<int> vis(n+ 1, 0);
    vis[1]=1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        bfs.push_back(top);
        for(auto& it:adj[top]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
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
    
    cout<<"Adjacency List: ";
    
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    
    cout<<"Bfs result: ";
    vector<int> result = bfs(n, adj);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}