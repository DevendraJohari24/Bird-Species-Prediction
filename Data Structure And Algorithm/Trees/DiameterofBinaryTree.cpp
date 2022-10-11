#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left;
        node* right;
};

node* newNode(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right) + 1);
}

int findDiameter(node* root){
    if(root == NULL){
        return 0;
    }
    int Lheight = height(root->left);
    int Rheight = height(root->right);

    int Ldiameter = findDiameter(root->left);
    int Rdiameter = findDiameter(root->right);
    int totalHeight = Lheight + Rheight + 1;

    return (max(max(Ldiameter, Rdiameter), totalHeight));
}

int main(){
    node* root = newNode(3);
    root->left = newNode(8);
    root->right = newNode(4);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->right->right = newNode(9);

    cout<<"Diameter of tree is : "<<findDiameter(root);
}
