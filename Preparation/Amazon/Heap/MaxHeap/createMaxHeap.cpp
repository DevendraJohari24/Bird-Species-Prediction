#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(20);
    pq.push(30);

    while(pq.empty() == false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}