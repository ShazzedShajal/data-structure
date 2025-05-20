// DFS calculate the size of evry subtree , 
// Doing DFS without a visited array
#include<bits/stdc++.h>
 
using namespace std;
 
#define N 100005
 
vector<int> adj[N];
 
int dfs(int u, int par){
    int subtree_size = 1;
 
    for(int v: adj[u]){
        if(v == par) continue;
        subtree_size += dfs(v, u);
    }
 
    return subtree_size;
}
 
int main() {
    int n;
    cin >> n;
 
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    int src = 1;
 
    dfs(src, 0);
 
 
    return 0;
}
