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

void  TopView(Node *root){

map<int,int> m;
queue<pair<Node*,int>> q;
if(!root){
    return ans;
}
q.push(root);
while(!q.empty()){
        Node* t= q.front().first;
        int h= q.front().second;
        q.pop();
        if(!m[h]){
            m[h]=t->data;
        }
        if(t->left){
            q.push({t->left,h-1});    
        }
        if(t->right){
            q.push({t->right,h+1});    
        }
  }
  for(auto x:m){
      cout<<x.second<<" ";
  }

}