#include <bits/stdc++.h>
using namespace std;

void dfs(int n, vector<int> &vis, vector<vector<int>> &adj, stack<int> &stk) {
    vis[n] = 1;
    for (int it : adj[n]) {
        if (!vis[it]) {
            dfs(it, vis, adj, stk);
        }
    }
    stk.push(n);
}

vector<int> toposort(int V, vector<vector<int>> &adj) {
    vector<int> vis(V, 0);
    stack<int> stk;

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, vis, adj, stk);
        }
    }

    vector<int> result;
    while (!stk.empty()) {
        result.push_back(stk.top());
        stk.pop(); 
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
