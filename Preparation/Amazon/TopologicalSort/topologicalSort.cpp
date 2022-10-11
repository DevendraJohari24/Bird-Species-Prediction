// also use to detect cycle
// if topological sort not found then the cycle is formed

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    // n-> number of vertices and m-> number of edges
    cin>>n>>m;
    int cnt=0;
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;

    }

    queue<int> pq;
    for(int i=0; i<n; i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }

    cout<<"Topological Sort : ";

    while(!pq.empty()){
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it: adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }
    return 0;
}