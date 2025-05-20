#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100005
vector<int> adj[N];
int visited[N];
int level[N];

void dfs(int v)
{
    cout<<"Node : "<<v<< " ,Level : "<<level[v]<<endl; // printing DFS
    visited[v]=1;

    for(auto u: adj[v])
    {
        if(visited[u]) continue;
        level[u] = level[v]+1; // level or path/shortest path ;
        dfs(u);
    }

}
int main() {
// DFS on tree;
    int n; // number of nodes, so number of edges will be n-1;
    cin>> n;

    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src=1;
    dfs(src);

    return 0;
}

/*
1 2
1 3
2 6
3 4
3 5
4 7
7 8
7 9

*/
