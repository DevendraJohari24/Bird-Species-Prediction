#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int m = 1e9 + 7;
vector<int> g[N];
int subTreeSum[N];

void dfs(int vertex, int par=-1){
    subTreeSum[vertex] += vertex;
    for(int child: g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        subTreeSum[vertex] += subTreeSum[child];
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
    long long ans=0;
    for(int i=2; i<=n; i++){
        int part1 = subTreeSum[i];
        int part2 = subTreeSum[1] - part1;
        ans = max(ans, (part1* 1ll * part2)%m);
    }
    cout<<ans<<endl;

    
}