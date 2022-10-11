#include<bits/stdc++.h>
using namespace std;
vector<int> bottomView(Node* root){
    map<int, int> freq;
    queue<pair<Node* , int>> q;
    q.push({root, 0});

    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            pair<Node*,int> deleted = q.front();
            q.pop();
            Node* cur = deleted.first;
            int hd = deleted.second;
            freq[hd] = cur->data;

            if(cur->left != NULL){
                q.push({cur->left, hd-1});
            }
            if(cur->right != NULL){
                q.push({cur->right, hd+1});
            }
        }
    }
    vector<int> ans;
    for(auto x: freq){
        ans.push_back(x.second);
    }
}

// Recursive Approach
void bottomViewRecursive(Node * root, int curr, int hd, map <int, pair <int, int>> & m)
{
    // Base case
    if (root == NULL)
        return;
    // If node for a particular
    // horizontal distance is not
    // present, add to the map.
    if (m.find(hd) == m.end())
    {
        m[hd] = make_pair(root -> data, curr);
    }
    // Compare height for already
    // present node at similar horizontal
    // distance
    else
    {
        pair < int, int > p = m[hd];
        if (p.second <= curr)
        {
            m[hd].second = curr;
            m[hd].first = root -> data;
        }
    }    
    // Recur for left subtree
    printBottomViewUtil(root -> left, curr + 1, hd - 1, m);    
    // Recur for right subtree
    printBottomViewUtil(root -> right, curr + 1, hd + 1, m);
}


int main(){

}