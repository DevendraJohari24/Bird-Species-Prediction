#include<bits/stdc++.h>
using namespace std;

vector<int> nearlySorted(vector<int>arr, int n, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(i<k){
            pq.push(arr[i]);
        }
        else{
            pq.push(arr[i]);
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main(){
    vector<int> ans= {3, 1, 4, 2, 5};
    int n=5, k=2;

    vector<int> sol = nearlySorted(ans, n, k);
    for(int i=0; i<sol.size(); i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}