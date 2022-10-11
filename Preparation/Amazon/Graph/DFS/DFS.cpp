// DFS 
// Depth First Search
// DFS -> Graph Traversal Algorithm
// First go to the depth 
/*
visited array is used to confirm that whether 
we visit that node previously or not


*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    // Take action on vertex after entering the vertex
    vis[vertex] = true;
    for(int child: g[vertex]){
        if(vis[child]) continue;
        // Take action on the child before entering the child node
        dfs(child);
        // Take action on child after exiting child mode
    }
    // Take action on vertex before exiting vertex
}
