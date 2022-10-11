#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<bool>> &matrix){
    int maxRowIndex = 0;
    int j = matrix[0].size() - 1;
    for(int i=0; i<matrix.size(); i++){
        int count=0;
        bool flag=false;
        while(j>=0 && matrix[i][j]==1){
            j = j-1;
            flag = true;
        }
        if(flag){
            maxRowIndex = i;
        }
    }

    if(maxRowIndex==0 && matrix[0][matrix[0].size()-1]==0){
        return -1;
    }
    return maxRowIndex;
}

int main(){
    vector<vector<bool>> matrix = {{0, 0, 0, 1},
                            {0, 1, 1, 1},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0}};

    cout<<"Index of Row with max 1's"<<rowWithMax1s(matrix);
    return 0;
}