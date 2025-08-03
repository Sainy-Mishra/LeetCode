#include <iostream>
#include <map>
#include <vector>
#include <cstring>

using namespace std;

bool issafe(int node,bool graph[101][101],int col, int n, int color[]){
    for(int i=0;i<n;i++){
        if(i!=node && graph[i][node]==1 && color[i]==col){
            return false;
        }
    }
    return true;
}

bool solve(int node, bool graph[101][101], int m, int n, int color[]){
    if(node==n){
        return true;
    }

    for(int col=1;col<=m;col++){
        if(issafe(node, graph, col, n, color)){
            color[node]=col;
            if(solve(node+1, graph, m, n, color)){
                return true;
            }
            color[node]=0;
        }
    }
    return false;
}

bool M_coloring(bool graph[101][101], int m, int n){
    int color[n]={0};
    if(solve(0,graph,m,n,color)){
        return true;
    }
    return false;
}

int main(){
  int n;
  int m;
  int e;
  cin >> n >> m >> e;
  bool graph[101][101];
  memset(graph,false, sizeof graph);

  for(int i=0;i<e;i++){
    int u, v;
    cin >> u >> v;
    graph[u][v] = true;
    graph[v][u] = true;
  }
  cout<<M_coloring(graph, m , n)<<endl;

  return 0;
}