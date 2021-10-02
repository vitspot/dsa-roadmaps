#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
};

void LeftTree(Node* root,vector<int> &ans){
    if(!root){
        return;
    }
    ans.push_back(root->data);
    LeftTree(root->left,ans);
    else if{
        ans.push_back(root->data);
        LeftTree(root->right);
    }
}

void leaf(Node* root,vector<int> &ans){
    if(!root) return;
    Leaf(root->left,ans);
    if(!root->left && !root->right){
        ans.push_back(root);
    }
    Leaf(root->right,ans);
}

void RightTree(Node* root,vector<int> &ans){
    if(!root){
        return;
    }
    
    if{
        RightTree(root->right,ans);
        ans.push_back(root->data);
    }
}

vector<int> PrintBoundary(Node* root){
    vector<int> ans;
    ans.push_back(root->data);
    LeftTree(root->left,ans);
    Leaf(root,ans);
    RightTree(root->right,ans);
    return ans;
}