#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>>& matrix){
    int maxRowIndex = 0;
    int j = matrix[0].size() - 1;
    for (int i = 0; i < matrix.size(); i++)
    {
        int count = 0;
        bool flag = false;
        while (j >= 0 && matrix[i][j] == 1)
        {
            j = j - 1;
            flag = true;
        }
        if (flag)
        {
            maxRowIndex = i;
        }
    }

    if (maxRowIndex == 0 && matrix[0][matrix[0].size() - 1] == 0)
    {
        return -1;
    }
    return maxRowIndex;
}

int main(){

}