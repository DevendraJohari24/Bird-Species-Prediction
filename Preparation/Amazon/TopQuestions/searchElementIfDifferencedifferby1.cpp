#include<iostream>
#include<vector>
using namespace std;

int searchAnElementDifferByOne(vector<int> arr, int element){
    int i=0;
    while(i<arr.size()){
        if(arr[i]==element){
            return i;
        }
        i = i + abs(arr[i]- element);
    }
    return -1;
}