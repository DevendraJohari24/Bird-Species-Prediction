// Functions of DSU
// make function -> new node add
// find function -> parent of the group
// union function -> a, b put in the same group and 


// Operations responsible for adding two trees
// size and Rank

// Rank -> works on depth of the tree
    // size -> total size of the tree
    // Path compression -> calling find function as well as path will be compressed as all nodes comes along the path makes its parent is root

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int parent[N];
int size[N];


void make(int v){
    parent[v] = v;
    size[v] = 1;
}

int find(int v){
    if(v == parent[v]){
        return v;
    }
    // Path compression
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        // Union by Size
        if(size[a]<size[b]){
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

// Time Complexity
// O(alpha(n)) -> alpha(n) -> reverse ackermen function
// amotorised time complexity -> over number of operations it becomes constant time complexity
int main(){
    int n, k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        make(i);
    }
    while(k--){
        int u, v;
        cin>>u>>v;
        Union(u, v);
    }
    int connected_ct = 0;
    for(int i=1; i<=n; i++){
        if(find(v)==v){
            connected_ct++;
        }
    }
