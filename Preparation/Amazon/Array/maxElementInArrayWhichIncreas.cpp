#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &arr){
    int max = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else{
            break;
        }
    }
    return max;
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<maxElement(arr);
}