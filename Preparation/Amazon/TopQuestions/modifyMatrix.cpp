#include<bits/stdc++.h>
using namespace std;

void modifyMatrix(vector<vector<int>>& mat){
    bool row_flag = false;
    bool col_flag = false;
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && mat[i][j]==1){
                row_flag = true;
            }
            if(j==0 && mat[i][j]==1){
                col_flag = true;
            }

            if(mat[i][j]==1){
                mat[0][j] = 1;
                mat[i][0] = 1;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[0][j]==1 || mat[i][0]==1){
                mat[i][j]=1;
            }
        }
    }   
    if(row_flag){
        for(int i=0; i<m; i++){
            mat[0][i] = 1;
        }
    }

    if(col_flag){
        for(int i=0; i<n; i++){
            mat[i][0] = 1;
        }
    }
}

int main(){

}