//Disjoint Set Union

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); // cin.tie(0); cout.tie(0);

const int N = 1e5+10;
int parent[N];
int size[N] ;
void make(int v)
{
    parent[v] = v;
    size[v] =1;
}

int find(int v)
{
    if(v == parent[v]) return v;

    // path compression
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a!=b)
    {
        //union by size
        if(size[a]<size[b]) swap(a,b);
        parent[b] = a;
        size[a] += size[b];
    }
}


int main() {
    int n, k ; // n nodes and k edges
    cin>> n>>k;
    for(int i=1;i<=n;i++)
        make(i);
    while(k--)
    {
        int u , v;
        cin>> u>>v;
        Union(u,v);
    }
    int connected_ct = 0;

    for(int i=1;i<=n;i++)
    {
        if(find(i)==i) connected_ct++;
    }
    cout<<connected_ct<<endl;
    return 0;
}

//idea from Luv
