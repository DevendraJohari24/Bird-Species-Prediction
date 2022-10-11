// DFS
// Depth First Search
// DFS -> Graph Traversal Algorithm
// First go to the depth
/*
visited array is used to confirm that whether
we visit that node previously or not


*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool vis[N];

vector<vector<int>>cc;
vector<int> current_cc;


void dfs(int vertex)
{
    // Take action on vertex after entering the vertex
    
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : g[vertex])
    {
        if (vis[child])
            continue;
        // Take action on the child before entering the child node
        dfs(child);
        // Take action on child after exiting child mode
    }
    // Take action on vertex before exiting vertex
}

int main(){
    int n, e;
    cin>>n>>e;
    for(int i=0; i<e; i++){
        int x, y;
        cin >>x >>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int ct=0;
    for(int i=1; i<=n; ++i){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
    }

    cout<< ct<<" ";



}