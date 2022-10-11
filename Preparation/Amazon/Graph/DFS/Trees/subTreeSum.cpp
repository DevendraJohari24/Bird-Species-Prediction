#include<bits/stdc++.h>
using namespace std;
int N = 1e5+10;
vector<int> g[N];

int subTreeSum[N];
int even_ct[N];

void dfs(int vertex, int par=0){
    if(vertex % 2 == 0){
        even_ct[vertex]++;
    }

    subTreeSum[vertex] += vertex;
    for(int child: g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        subTreeSum[vertex] += subTreeSum[child];
        even_ct[vertex] += even_ct[child];
    }

}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);
    int q;
    
    while(q--){
        int v;
        cin >> v;
        cout<<subTreeSum[v];

    }

}