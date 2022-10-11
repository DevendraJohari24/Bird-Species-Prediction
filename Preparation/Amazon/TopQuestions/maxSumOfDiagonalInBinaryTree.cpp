#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

vector<int> diagonalSum(Node *root)
{
    // Add your code here
    queue<Node *> q;

    vector<int> sumMatrix;
    if (root == NULL)
    {
        return sumMatrix;
    }
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        vector<int> ans;
        while (temp != NULL)
        {
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            ans.push_back(temp->data);
            temp = temp->right;
        }
        int sum = accumulate(ans.begin(), ans.end(), 0);
        sumMatrix.push_back(sum);
    }
    return sumMatrix;
}

int main(){
    
}