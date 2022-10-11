#include <bits/stdc++.h>
using namespace std;
const N = 1e5 + 10;



void dfs(int i, int j, int initalColor, int newColor, vector<vector<int>>& image){
    int n = image.size();
    int m = image[0].size();
    if(i<0 || j<0) return;
    if(i >=n || j>=m) return;

    if(image[i][j] != initalColor) return;

    image[i][j] = newColor;
    dfs(i-1, j, initalColor, newColor, image);
    dfs(i + 1, j, initalColor, newColor, image);
    dfs(i, j - 1, initalColor, newColor, image);
    dfs(i, j + 1, initalColor, newColor, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor){
    int initialColor = image[sr][sc];
    if(initialColor != newColor){
        dfs(sr, sc, initialColor, newColor, image);
    }
    return image;
}

int main()
{
    
}