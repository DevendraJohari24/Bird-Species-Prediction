#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int k){
    
    int m = matrix[0].size();
    int temp[m];
    k = k%m;
    for(int i=0; i<matrix.size(); i++){
        //copy first m-k elements to temporary array
        for(int t=0; t<m-k; t++){
            temp[t] = matrix[i][t];
        }
        //copy the elements from k to end to starting
        for(int j=m-k; j<m; j++){
            matrix[i][j-m+k] = matrix[i][j];
        }
        //copy elements from temporary array to end
        for(int j=k; j<m; j++){
            matrix[i][j] = temp[j-k];
        }
    }
}

void displayMatrix(vector<vector<int>>& matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix;

    for(int i=0; i<n; i++){
        vector<int>temp;
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    int k;
    cout<<"Enter k: ";
    cin >> k;

    cout<<"Original Matrix\n";
    displayMatrix(matrix);
    cout<<"\n New Matrix\n";
    
    rotateMatrix(matrix, k);
    displayMatrix(matrix);
    cout<<endl;
}