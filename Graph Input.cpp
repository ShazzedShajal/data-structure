G/*
Graph Input 
number of nodes = n; // V;
number of edge = m; // E

n m 
m line input:
(u1 v1)    
(u2 v2)
......
(um vm)
*/

//printing an adjacency matrix of an undirected graph
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    int adj[n + 1][n + 1]; // 1 based index

    memset(adj, 0, sizeof(adj));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Since the graph is undirected
    }






//printing an adjacency list of an undirected graph
int main() {
    int n, m;
    cin >> n >> m;
    
    
    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); // Since the graph is undirected
    }

    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int v : adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}



//printing an adjacency list of an undirected weighted graph
int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> adj[n + 1]; // adjacency list

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // because it's an undirected graph
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (auto v : adj[i]) {
            cout << "(" << v.first << ", " << v.second << ") ";
        }
        cout << endl;
    }

