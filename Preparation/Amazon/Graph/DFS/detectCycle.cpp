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

bool dfs(int vertex, int parent)
{
    // Take action on vertex after entering the vertex

    vis[vertex] = true;
    bool isLoopExists = false;
    for (int child : g[vertex])
    {
        if(vis[child] && child == parent) continue;

        if (vis[child])
            return true;
        // Take action on the child before entering the child node
        isLoopExists |= dfs(child, vertex);
        // Take action on child after exiting child mode
    }
    // Take action on vertex before exiting vertex
    return isLoopExists;
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    bool isLoopExists = false;
    for (int i = 1; i <= n; ++i)
    {
        if (vis[i])
            continue;
        if(dfs(i, 0)){ // check whether it is 0 to V-1 or 1 to V
            isLoopExists = true;
            break;
        }
    }

    cout << isLoopExists<< " ";
}