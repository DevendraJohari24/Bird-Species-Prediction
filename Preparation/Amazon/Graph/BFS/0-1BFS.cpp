#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9 + 10;

vector<pair<int, int>> g[N];
vector<int> lev(N, INF);
int n, m;

void bfs(int source){
    dequeue<int>q;
    q.push_back(source);
    lev[1] = 1;
    while(!q.empty()){
        int cur_v = q.front();
        q.pop_front();
        cout<<cur_v;
        for(auto child: g[cur_v]){
            int child_v = child.first;
            int wt = child.second;
            if(lev[cur_v] + wt < lev[child_v]){
                lev[child_v] = lev[cur_v] + wt;        
                if(wt==1){
                    q.push_back(child_v);
                }else{
                    q.push_front(child_v);
                }
            }
        }

    }
    return lev[n] == INF ? -1: levl[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int x, y;
        cin>>x>>y;
        if(x==y) continue;
        g[x].push_back({y, 0});
        g[y].push_back({x, 1});

    }
    bfs(1);
    for(int i=1; i<=n; i++){
        cout<<i<<": "<<level[i]<<endl; 
    }
}