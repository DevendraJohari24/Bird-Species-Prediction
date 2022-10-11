#include<bits/stdc++.h>
using namespace std;

int search(vector<vector<int>>& matrix, int elem){
    if(matrix.size()==0){
        return -1;
    }
    int n = matrix.size();
    if(elem<matrix[0][0] || elem > matrix[n-1][n-1])
    {
        return -1;
    }

    int i=0; int j=n-1;
    while(i<n && j>=0){
        if(matrix[i][j]==elem){
            cout<<i <<" "<< j;
            return 1;
        }
        if(matrix[i][j]>elem){
            j--;
        }else{
            i++;
        }
    }

    cout<<"Element Not Found!";
}


int main(){

}