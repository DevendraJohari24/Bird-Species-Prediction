#include<bits/stdc++.h>
using namespace std;

void printLeafNodes(Node* root, vector<int>&ans){
    if(!root){
        return;
    }

    if(!root->left && !root->right){
        ans.push_back(root->data);
    }

    if(root->left){
        printLeafNodes(root->leaf, ans);
    }

    if(root->right){
        printLeafNodes(root->right, ans);
    }
}

int main(){

}